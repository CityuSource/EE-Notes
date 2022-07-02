#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <ctype.h>
using namespace std;

#define MAX_LOOP 1000

struct service_t
{
	string type; // C (cpu), D (disk), K(keyboard), L(mutex lock), U(mutex unlock)
	int time_cost;
	service_t() : type(""), time_cost(-1) {}
	service_t(string type, string desc) : type(type)
	{
		try
		{

			this->time_cost = stoi(desc);
		}
		catch (exception &err)
		{

			this->time_cost = 0; //if the time tick equal to mtx, catch it and let time_cost = 0
		}
	}
};

struct process_t
{
	int process_id;
	int arrival_time;
	vector<service_t> service_seq;
	service_t cur_service;
	int cur_service_idx;
	int cur_service_tick; // num of ticks that has been spent on current service
	vector<int> working;  // working sequence on CPU, for loging output

	// Call when current service completed
	// if there are no service left, return true. Otherwise, return false
	bool proceed_to_next_service()
	{
		this->cur_service_idx++;
		this->cur_service_tick = 0;
		if (this->cur_service_idx >= this->service_seq.size())
		{ // all services are done, process should end
			return true;
		}
		else
		{ // still requests services
			this->cur_service = this->service_seq[this->cur_service_idx];
			return false;
		}
	};

	// Log the working ticks on CPU (from `start_tick` to `end_tick`)
	void log_working(int start_tick, int end_tick)
	{
		this->working.push_back(start_tick);
		this->working.push_back(end_tick);
	};
};

// write output log
int write_file(vector<process_t> processes, const char *file_path)
{
	ofstream outputfile;
	outputfile.open(file_path);
	for (vector<process_t>::iterator p_iter = processes.begin(); p_iter != processes.end(); p_iter++)
	{
		outputfile << "process " << p_iter->process_id << endl;
		for (vector<int>::iterator w_iter = p_iter->working.begin(); w_iter != p_iter->working.end(); w_iter++)
		{
			outputfile << *w_iter << " ";
		}
		outputfile << endl;
	}
	outputfile.close();
	return 0;
}

// Split a string according to a delimiter
void split(const string &s, vector<string> &tokens, const string &delim = " ")
{
	string::size_type last_pos = s.find_first_not_of(delim, 0);
	string::size_type pos = s.find_first_of(delim, last_pos);
	while (string::npos != pos || string::npos != last_pos)
	{
		tokens.push_back(s.substr(last_pos, pos - last_pos));
		last_pos = s.find_first_not_of(delim, pos);
		pos = s.find_first_of(delim, last_pos);
	}
}

vector<process_t> read_processes(const char *file_path)
{
	vector<process_t> process_queue;
	ifstream file(file_path);
	string str;
	while (getline(file, str))
	{
		process_t new_process;
		stringstream ss(str);
		int service_num;
		char syntax;
		ss >> syntax >> new_process.process_id >> new_process.arrival_time >> service_num;
		for (int i = 0; i < service_num; i++)
		{ // read services sequence
			getline(file, str);
			str = str.erase(str.find_last_not_of(" \n\r\t") + 1);
			vector<string> tokens;
			split(str, tokens, " ");
			service_t ser(tokens[0], tokens[1]);
			new_process.service_seq.push_back(ser);
		}
		new_process.cur_service_idx = 0;
		new_process.cur_service_tick = 0;
		new_process.cur_service = new_process.service_seq[new_process.cur_service_idx];
		process_queue.push_back(new_process);
	}
	return process_queue;
}

// move the process at the front of q1 to the back of q2 (q1 head -> q2 tail)
int move_process_from(vector<process_t> &q1, vector<process_t> &q2)
{
	if (!q1.empty())
	{
		process_t &tmp = q1.front();
		q2.push_back(tmp);
		q1.erase(q1.begin());
		return 1;
	}
	return 0;
}

// move the process at the back of q to back-num position (q tail -> q tail-num)
int push_process_to(vector<process_t> &q, int num)
{
	if (!q.empty())
	{
		process_t &tmp = q.front();
		q.insert(q.end() - num, tmp);
		q.erase(q.begin());
		return 1;
	}
	return 0;
}

// First Come First Served Scheduling Algorithm
int fcfs(vector<process_t> processes, const char *output_path)
{
	vector<process_t> ready_queue;
	vector<process_t> disk_block_queue;
	vector<process_t> keyboard_block_queue;
	vector<process_t> mutex_block_queue;
	vector<process_t> processes_done;

	int complete_num = 0;
	int dispatched_tick = 0;
	int cur_process_id = -1, prev_process_id = -1;
	bool mutex_unlock = false;
	int mutex_using = 1;

	// main loop
	for (int cur_tick = 0; cur_tick < MAX_LOOP; cur_tick++)
	{

		int io_complete = 0;

		// long term scheduler
		for (int i = 0; i < processes.size(); i++)
		{
			if (processes[i].arrival_time == cur_tick)
			{ // process arrives at current tick
				ready_queue.push_back(processes[i]);
			}
		}

		// I/O device scheduling
		if (!disk_block_queue.empty())
		{
			process_t &cur_disk_io_process = disk_block_queue.front(); // always provide service to the first process in block queue
			cur_disk_io_process.cur_service_tick++;					   // increment the num of ticks that have been spent on current service
			if (cur_disk_io_process.cur_service_tick >= cur_disk_io_process.cur_service.time_cost)
			{ // I/O service is completed
				cur_disk_io_process.proceed_to_next_service();
				move_process_from(disk_block_queue, ready_queue);
				io_complete++;
			}
		}

		// keyboard I/O scheduling
		if (!keyboard_block_queue.empty())
		{
			process_t &cur_keyboard_io_process = keyboard_block_queue.front(); // always provide service to the first process in block queue
			cur_keyboard_io_process.cur_service_tick++;						   // increment the num of ticks that have been spent on current service
			if (cur_keyboard_io_process.cur_service_tick >= cur_keyboard_io_process.cur_service.time_cost)
			{ // I/O service is completed
				cur_keyboard_io_process.proceed_to_next_service();
				move_process_from(keyboard_block_queue, ready_queue);
				io_complete++;
			}
		}

		// mutex scheduling
		if (!mutex_block_queue.empty())
		{
			process_t &cur_mutex_process = mutex_block_queue.front(); // always provide service to the first process in block queue
			if (mutex_unlock)
			{ // some process unlock the mutex
				cur_mutex_process.proceed_to_next_service();
				move_process_from(mutex_block_queue, ready_queue);
				io_complete++;
				mutex_unlock = false;
			}
		}

		// CPU scheduling
		if (ready_queue.empty() or (prev_process_id == -1 and io_complete != 0))
		{						  // no process for scheduling
			prev_process_id = -1; // reset the previous dispatched process ID to empty
		}
		else
		{
			process_t &cur_process = ready_queue.front(); // always dispatch the first process in ready queue
			cur_process_id = cur_process.process_id;
			if (cur_process_id != prev_process_id)
			{ // store the tick when current process is dispatched
				dispatched_tick = cur_tick;
			}

			cur_process.cur_service_tick++; // increment the num of ticks that have been spent on current service

			if (cur_process.cur_service_tick >= cur_process.cur_service.time_cost)
			{ // current service is completed

			FCFS_NEXT_SERVICE:
				bool process_completed = cur_process.proceed_to_next_service();
				if (process_completed)
				{ // the whole process is completed
					complete_num++;
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(ready_queue, processes_done); // remove current process from ready queue
				}
				else if (cur_process.cur_service.type == "D")
				{ // next service is disk I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(ready_queue, disk_block_queue);
				}
				else if (cur_process.cur_service.type == "K")
				{ // next service is keyboard I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(ready_queue, keyboard_block_queue);
				}
				else if (cur_process.cur_service.type == "L")
				{ // next service is mutex lock
					mutex_using--;
					if (mutex_using == 0)
					{
						// first process to use mutex
						goto FCFS_NEXT_SERVICE; // go back to the next service since it cost 0 tick
					}
					else if (mutex_using != 0)
					{
						// not the first process to use mutex
						cur_process.log_working(dispatched_tick, cur_tick + 1);
						move_process_from(ready_queue, mutex_block_queue);
					}
				}
				else if (cur_process.cur_service.type == "U")
				{ // next service is mutex unlock, free the mutex
					mutex_unlock = true;
					mutex_using++;
					goto FCFS_NEXT_SERVICE; // go back to the next service since it cost 0 tick
				}
			}
			prev_process_id = cur_process_id; // log the previous dispatched process ID
		}
		if (complete_num == processes.size())
		{ // all process completed
			break;
		}
	}
	write_file(processes_done, output_path); // write output
	return 1;
}

// Round Robin Scheduling Algorithm
int rr(vector<process_t> processes, const char *output_path)
{
	vector<process_t> ready_queue;
	vector<process_t> disk_block_queue;
	vector<process_t> keyboard_block_queue;
	vector<process_t> mutex_block_queue;
	vector<process_t> processes_done;

	int complete_num = 0;
	int dispatched_tick = 0;
	int cur_process_id = -1, prev_process_id = -1;
	int time_quantum = 5;
	bool maybe_same_proccess = false;
	bool mutex_unlock = false;
	int mutex_using = 1;

	// main loop
	for (int cur_tick = 0; cur_tick < MAX_LOOP; cur_tick++)
	{

		int io_complete = 0;

		// long term scheduler
		for (int i = 0; i < processes.size(); i++)
		{
			if (processes[i].arrival_time == cur_tick)
			{ // process arrives at current tick
				ready_queue.push_back(processes[i]);
			}
		}

		// I/O device scheduling
		if (!disk_block_queue.empty())
		{
			process_t &cur_disk_io_process = disk_block_queue.front(); // always provide service to the first process in block queue
			cur_disk_io_process.cur_service_tick++;					   // increment the num of ticks that have been spent on current service
			if (cur_disk_io_process.cur_service_tick >= cur_disk_io_process.cur_service.time_cost)
			{ // I/O service is completed
				cur_disk_io_process.proceed_to_next_service();
				move_process_from(disk_block_queue, ready_queue);
				io_complete++;
			}
		}

		// keyboard I/O scheduling
		if (!keyboard_block_queue.empty())
		{
			process_t &cur_keyboard_io_process = keyboard_block_queue.front(); // always provide service to the first process in block queue
			cur_keyboard_io_process.cur_service_tick++;						   // increment the num of ticks that have been spent on current service
			if (cur_keyboard_io_process.cur_service_tick >= cur_keyboard_io_process.cur_service.time_cost)
			{ // I/O service is completed
				cur_keyboard_io_process.proceed_to_next_service();
				move_process_from(keyboard_block_queue, ready_queue);
				io_complete++;
			}
		}

		// mutex scheduling
		if (!mutex_block_queue.empty())
		{
			process_t &cur_mutex_process = mutex_block_queue.front(); // always provide service to the first process in block queue
			if (mutex_unlock)
			{ // some process unlock the mutex
				cur_mutex_process.proceed_to_next_service();
				move_process_from(mutex_block_queue, ready_queue);
				mutex_unlock = false;
				io_complete++;
			}
		}

		// CPU scheduling
		if (ready_queue.empty() or (prev_process_id == -1 and io_complete != 0))
		{						  // no process for scheduling
			prev_process_id = -1; // reset the previous dispatched process ID to empty
		}
		else
		{
			process_t &cur_process = ready_queue.front(); // always dispatch the first process in ready queue
			cur_process_id = cur_process.process_id;
			if (cur_process_id != prev_process_id)
			{ // store the tick when current process is dispatched
				dispatched_tick = cur_tick;
				maybe_same_proccess = false;
			}
			else if (cur_process_id == prev_process_id and maybe_same_proccess)
			{ // store the tick when current process is dispatched or still same process after time interrupt happen
				dispatched_tick = cur_tick;
				maybe_same_proccess = false;
			}

			cur_process.cur_service_tick++; // increment the num of ticks that have been spent on current service

			if (cur_process.cur_service_tick % time_quantum == 0 and cur_process.cur_service_tick < cur_process.cur_service.time_cost)
			{
				//time interrupt occur

				cur_process.log_working(dispatched_tick, cur_tick + 1);

				if (io_complete == 0)
				{

					move_process_from(ready_queue, ready_queue);
				}
				else if (io_complete != 0)
				{
					//time interrupt occur and io complete at the same time
					push_process_to(ready_queue, io_complete);
					maybe_same_proccess = true;
				}
			}
			else if (cur_process.cur_service_tick >= cur_process.cur_service.time_cost)
			{ // current service is completed

			RR_NEXT_SERVICE:
				bool process_completed = cur_process.proceed_to_next_service();
				if (process_completed)
				{ // the whole process is completed
					complete_num++;
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(ready_queue, processes_done); // remove current process from ready queue
				}
				else if (cur_process.cur_service.type == "D")
				{ // next service is disk I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(ready_queue, disk_block_queue);
				}
				else if (cur_process.cur_service.type == "K")
				{ // next service is keyboard I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(ready_queue, keyboard_block_queue);
				}
				else if (cur_process.cur_service.type == "L")
				{ // next service is mutex lock

					mutex_using--;
					if (mutex_using == 0 and cur_process.cur_service_tick % time_quantum == 0)
					{
						//the first process using mutex and time interrupt occur
						cur_process.log_working(dispatched_tick, cur_tick + 1);

						if (io_complete == 0)
						{

							bool process_completed = cur_process.proceed_to_next_service();
							if (process_completed)
							{ // the whole process is completed
								complete_num++;
								move_process_from(ready_queue, processes_done); // remove current process from ready queue
							}
							else if (cur_process.cur_service.type == "D")
							{ // next service is disk I/O, block current process
								move_process_from(ready_queue, disk_block_queue);
							}
							else if (cur_process.cur_service.type == "K")
							{ // next service is keyboard I/O, block current process
								move_process_from(ready_queue, keyboard_block_queue);
							}
							else
							{
								move_process_from(ready_queue, ready_queue);
							}
						}
						else if (io_complete != 0)
						{

							cur_process.proceed_to_next_service();
							bool process_completed = cur_process.proceed_to_next_service();
							if (process_completed)
							{ // the whole process is completed
								complete_num++;
								move_process_from(ready_queue, processes_done); // remove current process from ready queue
							}
							else if (cur_process.cur_service.type == "D")
							{ // next service is disk I/O, block current process
								move_process_from(ready_queue, disk_block_queue);
							}
							else if (cur_process.cur_service.type == "K")
							{ // next service is keyboard I/O, block current process
								move_process_from(ready_queue, keyboard_block_queue);
							}
							else
							{
								move_process_from(ready_queue, ready_queue);
							}
							push_process_to(ready_queue, io_complete);
							maybe_same_proccess = true;
						}
					}
					else if (mutex_using == 0 and cur_process.cur_service_tick % time_quantum != 0)
					{
						//the first process using mutex
						goto RR_NEXT_SERVICE;
					}
					else if (mutex_using != 0)
					{
						// not the first process using mutex
						cur_process.log_working(dispatched_tick, cur_tick + 1);
						move_process_from(ready_queue, mutex_block_queue);
					}
				}
				else if (cur_process.cur_service.type == "U")
				{ // next service is mutex unlock

					mutex_unlock = true;
					mutex_using++;
					goto RR_NEXT_SERVICE;
				}
			}
			prev_process_id = cur_process_id; // log the previous dispatched process ID
		}

		if (complete_num == processes.size())
		{ // all process completed
			break;
		}
	}
	write_file(processes_done, output_path); // write output
	return 1;
}

// Feedback Scheduling Algorithm
int fb(vector<process_t> processes, const char *output_path)
{
	vector<process_t> rq0;
	vector<process_t> rq1;
	vector<process_t> rq2;
	vector<process_t> disk_block_queue;
	vector<process_t> keyboard_block_queue;
	vector<process_t> mutex_block_queue;
	vector<process_t> processes_done;
	//record the process came from which queue
	vector<int> came_from_queue_for_disk;
	vector<int> came_from_queue_for_keyboard;
	vector<int> came_from_queue_for_mutex;

	int complete_num = 0;
	int dispatched_tick = 0;
	int cur_process_id = -1, prev_process_id = -1;
	int time_quantum = 5;
	bool maybe_same_proccess = false;
	bool mutex_unlock = false;
	int mutex_using = 1;
	bool queue_1_executing = false;
	bool queue_2_executing = false;

	// main loop
	for (int cur_tick = 0; cur_tick < MAX_LOOP; cur_tick++)
	{

		int io_complete = 0;

		// long term scheduler
		for (int i = 0; i < processes.size(); i++)
		{
			if (processes[i].arrival_time == cur_tick)
			{ // process arrives at current tick
				rq0.push_back(processes[i]);
			}
		}

		// I/O device scheduling
		if (!disk_block_queue.empty())
		{
			process_t &cur_disk_io_process = disk_block_queue.front(); // always provide service to the first process in block queue
			cur_disk_io_process.cur_service_tick++;					   // increment the num of ticks that have been spent on current service
			if (cur_disk_io_process.cur_service_tick >= cur_disk_io_process.cur_service.time_cost)
			{ // I/O service is completed
				cur_disk_io_process.proceed_to_next_service();
				if (came_from_queue_for_disk.front() == 0)
				{
					// when process came from q0
					move_process_from(disk_block_queue, rq0);
					came_from_queue_for_disk.erase(came_from_queue_for_disk.begin());
				}
				else if (came_from_queue_for_disk.front() == 1)
				{
					// when process came from q1
					move_process_from(disk_block_queue, rq1);
					came_from_queue_for_disk.erase(came_from_queue_for_disk.begin());
				}
				else if (came_from_queue_for_disk.front() == 2)
				{
					// when process came from q2
					move_process_from(disk_block_queue, rq2);
					came_from_queue_for_disk.erase(came_from_queue_for_disk.begin());
				}
				io_complete++;
			}
		}

		// keyboard I/O scheduling
		if (!keyboard_block_queue.empty())
		{

			process_t &cur_keyboard_io_process = keyboard_block_queue.front(); // always provide service to the first process in block queue
			cur_keyboard_io_process.cur_service_tick++;						   // increment the num of ticks that have been spent on current service
			if (cur_keyboard_io_process.cur_service_tick >= cur_keyboard_io_process.cur_service.time_cost)
			{ // I/O service is completed
				cur_keyboard_io_process.proceed_to_next_service();
				if (came_from_queue_for_keyboard.front() == 0)
				{
					// when process came from q0
					move_process_from(keyboard_block_queue, rq0);
					came_from_queue_for_keyboard.erase(came_from_queue_for_keyboard.begin());
				}
				else if (came_from_queue_for_keyboard.front() == 1)
				{
					// when process came from q1
					move_process_from(keyboard_block_queue, rq1);
					came_from_queue_for_keyboard.erase(came_from_queue_for_keyboard.begin());
				}
				else if (came_from_queue_for_keyboard.front() == 2)
				{
					// when process came from q2
					move_process_from(keyboard_block_queue, rq2);
					came_from_queue_for_keyboard.erase(came_from_queue_for_keyboard.begin());
				}
				io_complete++;
			}
		}

		// mutex scheduling
		if (!mutex_block_queue.empty())
		{
			process_t &cur_mutex_process = mutex_block_queue.front(); // always provide service to the first process in block queue
			if (mutex_unlock)
			{ //some process unlock the mutex
				cur_mutex_process.proceed_to_next_service();
				if (came_from_queue_for_mutex.front() == 0)
				{
					// when process came from q0
					move_process_from(mutex_block_queue, rq0);
					came_from_queue_for_mutex.erase(came_from_queue_for_mutex.begin());
				}
				else if (came_from_queue_for_mutex.front() == 1)
				{
					// when process came from q1
					move_process_from(mutex_block_queue, rq1);
					came_from_queue_for_mutex.erase(came_from_queue_for_mutex.begin());
				}
				else if (came_from_queue_for_mutex.front() == 2)
				{
					// when process came from q2
					move_process_from(mutex_block_queue, rq2);
					came_from_queue_for_mutex.erase(came_from_queue_for_mutex.begin());
				}
				mutex_unlock = false;
				io_complete++;
			}
		}

		// CPU scheduling
		if ((rq0.empty() and rq1.empty() and rq2.empty()) or (prev_process_id == -1 and io_complete != 0))
		{						  // no process for scheduling
			prev_process_id = -1; // reset the previous dispatched process ID to empty
		}
		else if (!rq0.empty() and !queue_1_executing and !queue_2_executing)
		{
			//when rq0 is running
			process_t &cur_process = rq0.front(); // always dispatch the first process in ready queue
			cur_process_id = cur_process.process_id;
			if (cur_process_id != prev_process_id)
			{ // store the tick when current process is dispatched

				dispatched_tick = cur_tick;
			}

			cur_process.cur_service_tick++; // increment the num of ticks that have been spent on current service

			if (cur_process.cur_service_tick % time_quantum == 0 and cur_process.cur_service_tick < cur_process.cur_service.time_cost)
			{
				//time interrupt occur
				cur_process.log_working(dispatched_tick, cur_tick + 1);
				//move process from rq0 to rq1
				move_process_from(rq0, rq1);
			}
			else if (cur_process.cur_service_tick >= cur_process.cur_service.time_cost)
			{ // current service is completed

			FB_Q0_NEXT_SERVICE:
				bool process_completed = cur_process.proceed_to_next_service();
				if (process_completed)
				{ // the whole process is completed
					complete_num++;
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(rq0, processes_done); // remove current process from ready queue
				}
				else if (cur_process.cur_service.type == "D")
				{ // next service is disk I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					came_from_queue_for_disk.push_back(0);
					move_process_from(rq0, disk_block_queue);
				}
				else if (cur_process.cur_service.type == "K")
				{ // next service is keyboard I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					came_from_queue_for_keyboard.push_back(0);
					move_process_from(rq0, keyboard_block_queue);
				}
				else if (cur_process.cur_service.type == "L")
				{ // next service is mutex lock

					mutex_using--;
					if (mutex_using == 0 and cur_process.cur_service_tick % time_quantum == 0)
					{
						// first process using mutex and time interrupt occur
						cur_process.log_working(dispatched_tick, cur_tick + 1);
						bool process_completed = cur_process.proceed_to_next_service();
						if (process_completed)
						{ // the whole process is completed
							complete_num++;
							move_process_from(rq0, processes_done); // remove current process from ready queue
						}
						else if (cur_process.cur_service.type == "D")
						{ // next service is disk I/O, block current process
							came_from_queue_for_disk.push_back(0);
							move_process_from(rq0, disk_block_queue);
						}
						else if (cur_process.cur_service.type == "K")
						{ // next service is keyboard I/O, block current process
							came_from_queue_for_keyboard.push_back(0);
							move_process_from(rq0, keyboard_block_queue);
						}
						else
						{
							move_process_from(rq0, rq1);
						}
					}
					else if (mutex_using == 0 and cur_process.cur_service_tick % time_quantum != 0)
					{
						goto FB_Q0_NEXT_SERVICE;
					}
					else if (mutex_using != 0)
					{
						// not the first process using mutex
						cur_process.log_working(dispatched_tick, cur_tick + 1);
						came_from_queue_for_mutex.push_back(0);
						move_process_from(rq0, mutex_block_queue);
					}
				}
				else if (cur_process.cur_service.type == "U")
				{ // next service is mutex unlock, block current process
					mutex_unlock = true;
					mutex_using++;
					goto FB_Q0_NEXT_SERVICE;
				}
			}
			prev_process_id = cur_process_id; // log the previous dispatched process ID
		}
		else if ((!rq1.empty() and rq0.empty()) or (!rq1.empty() and !queue_2_executing))
		{
			//when rq1 is running
			process_t &cur_process = rq1.front(); // always dispatch the first process in ready queue
			cur_process_id = cur_process.process_id;
			if (cur_process_id != prev_process_id)
			{ // store the tick when current process is dispatched
				dispatched_tick = cur_tick;
			}

			queue_1_executing = true;
			cur_process.cur_service_tick++; // increment the num of ticks that have been spent on current service

			if (cur_process.cur_service_tick % time_quantum == 0 and cur_process.cur_service_tick < cur_process.cur_service.time_cost)
			{
				//time interrupt occur
				cur_process.log_working(dispatched_tick, cur_tick + 1);
				move_process_from(rq1, rq2);
				queue_1_executing = false;
			}
			else if (cur_process.cur_service_tick >= cur_process.cur_service.time_cost)
			{ // current service is completed

			FB_Q1_NEXT_SERVICE:
				bool process_completed = cur_process.proceed_to_next_service();
				if (process_completed)
				{ // the whole process is completed
					complete_num++;
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(rq1, processes_done); // remove current process from ready queue
				}
				else if (cur_process.cur_service.type == "D")
				{ // next service is disk I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					came_from_queue_for_disk.push_back(1);
					move_process_from(rq1, disk_block_queue);
				}
				else if (cur_process.cur_service.type == "K")
				{ // next service is keyboard I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					came_from_queue_for_keyboard.push_back(1);
					move_process_from(rq1, keyboard_block_queue);
				}
				else if (cur_process.cur_service.type == "L")
				{ // next service is mutex lock
					mutex_using--;
					if (mutex_using == 0 and cur_process.cur_service_tick % time_quantum == 0)
					{
						//the first process using mutex and time interrupt occur
						cur_process.log_working(dispatched_tick, cur_tick + 1);
						bool process_completed = cur_process.proceed_to_next_service();
						if (process_completed)
						{ // the whole process is completed
							complete_num++;
							move_process_from(rq1, processes_done); // remove current process from ready queue
						}
						else if (cur_process.cur_service.type == "D")
						{ // next service is disk I/O, block current process
							came_from_queue_for_disk.push_back(1);
							move_process_from(rq1, disk_block_queue);
						}
						else if (cur_process.cur_service.type == "K")
						{ // next service is keyboard I/O, block current process
							came_from_queue_for_keyboard.push_back(1);
							move_process_from(rq1, keyboard_block_queue);
						}
						else
						{
							move_process_from(rq1, rq2);
						}
					}
					else if (mutex_using == 0 and cur_process.cur_service_tick % time_quantum != 0)
					{
						goto FB_Q1_NEXT_SERVICE;
					}
					else if (mutex_using != 0)
					{
						//not the first process using mutex
						cur_process.log_working(dispatched_tick, cur_tick + 1);
						came_from_queue_for_mutex.push_back(1);
						move_process_from(rq1, mutex_block_queue);
					}
				}
				else if (cur_process.cur_service.type == "U")
				{ // next service is mutex unlock
					mutex_unlock = true;
					mutex_using++;
					goto FB_Q1_NEXT_SERVICE;
				}

				queue_1_executing = false;
			}
			prev_process_id = cur_process_id; // log the previous dispatched process ID
		}
		else if ((!rq2.empty() and rq0.empty() and rq1.empty()) or (!rq2.empty() and queue_2_executing))
		{
			//when rq2 is running
			process_t &cur_process = rq2.front(); // always dispatch the first process in ready queue
			cur_process_id = cur_process.process_id;
			if (cur_process_id != prev_process_id)
			{ // store the tick when current process is dispatched
				dispatched_tick = cur_tick;
				maybe_same_proccess = false;
			}
			else if (cur_process_id == prev_process_id and maybe_same_proccess)
			{
				dispatched_tick = cur_tick;
				maybe_same_proccess = false;
			}
			queue_2_executing = true;
			cur_process.cur_service_tick++; // increment the num of ticks that have been spent on current service

			if (cur_process.cur_service_tick % time_quantum == 0 and cur_process.cur_service_tick < cur_process.cur_service.time_cost)
			{
				//time interrupt
				cur_process.log_working(dispatched_tick, cur_tick + 1);

				if (io_complete == 0)
				{

					move_process_from(rq2, rq2);
					queue_2_executing = false;
				}
				else if (io_complete != 0)
				{
					//time interrupt occur and io complete at the same time
					push_process_to(rq2, io_complete);
					maybe_same_proccess = true;
					queue_2_executing = false;
				}
			}
			else if (cur_process.cur_service_tick >= cur_process.cur_service.time_cost)
			{ // current service is completed

			FB_Q2_NEXT_SERVICE:
				bool process_completed = cur_process.proceed_to_next_service();
				if (process_completed)
				{ // the whole process is completed
					complete_num++;
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					move_process_from(rq2, processes_done); // remove current process from ready queue
				}
				else if (cur_process.cur_service.type == "D")
				{ // next service is disk I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					came_from_queue_for_disk.push_back(2);
					move_process_from(rq2, disk_block_queue);
				}
				else if (cur_process.cur_service.type == "K")
				{ // next service is keyboard I/O, block current process
					cur_process.log_working(dispatched_tick, cur_tick + 1);
					came_from_queue_for_keyboard.push_back(2);
					move_process_from(rq2, keyboard_block_queue);
				}
				else if (cur_process.cur_service.type == "L")
				{ // next service is mutex lock

					mutex_using--;
					if (mutex_using == 0 and cur_process.cur_service_tick % time_quantum == 0)
					{
						//the first process using mutex and time interrupt occur
						cur_process.log_working(dispatched_tick, cur_tick + 1);

						if (io_complete == 0)
						{

							bool process_completed = cur_process.proceed_to_next_service();
							if (process_completed)
							{ // the whole process is completed
								complete_num++;
								move_process_from(rq2, processes_done); // remove current process from ready queue
							}
							else if (cur_process.cur_service.type == "D")
							{ // next service is disk I/O, block current process
								came_from_queue_for_disk.push_back(2);
								move_process_from(rq2, disk_block_queue);
							}
							else if (cur_process.cur_service.type == "K")
							{ // next service is keyboard I/O, block current process
								came_from_queue_for_keyboard.push_back(2);
								move_process_from(rq2, keyboard_block_queue);
							}
							else
							{
								move_process_from(rq2, rq2);
							}
						}
						else if (io_complete != 0)
						{

							cur_process.proceed_to_next_service();
							bool process_completed = cur_process.proceed_to_next_service();
							if (process_completed)
							{ // the whole process is completed
								complete_num++;
								move_process_from(rq2, processes_done); // remove current process from ready queue
							}
							else if (cur_process.cur_service.type == "D")
							{ // next service is disk I/O, block current process
								came_from_queue_for_disk.push_back(2);
								move_process_from(rq2, disk_block_queue);
							}
							else if (cur_process.cur_service.type == "K")
							{ // next service is keyboard I/O, block current process
								came_from_queue_for_keyboard.push_back(2);
								move_process_from(rq2, keyboard_block_queue);
							}
							else
							{
								move_process_from(rq2, rq2);
							}
							push_process_to(rq2, io_complete);
							maybe_same_proccess = true;
						}
					}
					else if (mutex_using == 0 and cur_process.cur_service_tick % time_quantum != 0)
					{
						goto FB_Q2_NEXT_SERVICE;
					}
					else if (mutex_using != 0)
					{
						//not the first process using mutex
						cur_process.log_working(dispatched_tick, cur_tick + 1);
						came_from_queue_for_mutex.push_back(2);
						move_process_from(rq2, mutex_block_queue);
					}
				}
				else if (cur_process.cur_service.type == "U")
				{ // next service is mutex unlock, block current process
					mutex_unlock = true;
					mutex_using++;
					goto FB_Q2_NEXT_SERVICE;
				}

				queue_2_executing = false;
			}
			prev_process_id = cur_process_id; // log the previous dispatched process ID
		}

		if (complete_num == processes.size())
		{ // all process completed
			break;
		}
	}
	write_file(processes_done, output_path); // write output
	return 1;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		cout << "Incorrect inputs: too few arugments" << endl;
		return 0;
	}
	const char *scheduling_algorithm = argv[1];
	const char *process_path = argv[2];
	const char *output_path = argv[3];
	vector<process_t> process_queue = read_processes(process_path);

	if ((string)scheduling_algorithm == "FCFS")
	{

		fcfs(process_queue, output_path);
	}
	else if ((string)scheduling_algorithm == "RR")
	{

		rr(process_queue, output_path);
	}
	else if ((string)scheduling_algorithm == "FB")
	{

		fb(process_queue, output_path);
	}
	else
	{
		cout << "Incorrect inputs: scheduling algorithm not found" << endl;
	}

	return 0;
}
