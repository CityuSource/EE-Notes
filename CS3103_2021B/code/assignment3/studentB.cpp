#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

using std::any_of;
using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::stringstream;
using std::vector;

using std::exception;
using std::invalid_argument;
using std::logic_error;
using std::overflow_error;
using std::underflow_error;
// using std::filesystem::exists;

#define MAX_Tick 1000 // MAX time tick = 1000
#define RR_tick 5     // RR K = 5
#define FB_tick 5     // FB K = 5
#define FB_level 3    // Number of levels of the ready queue
#define Prefix 0      // Prefix for the filename (default is off)

struct service_t
{
    string service_type;
    int time_req;

    service_t() : service_type(), time_req(-1) {}
    service_t(string service_type, string time) : service_type(service_type) { this->time_req = atoi(time.c_str()); }
};

struct process_t
{
    int process_id;
    int arr_time;
    int service_total;
    int despatch_time;

    vector<service_t> Service_List;
    service_t CurService;
    int CurService_Number;
    int CurService_TickSpend;
    int from_queue;
    vector<int> log;

    process_t() : CurService_Number(0), CurService_TickSpend(0), from_queue(0) {}
    void load_service() { this->CurService = this->Service_List[this->CurService_Number]; };

    void log_write(int time_start, int time_end)
    {
        this->log.push_back(time_start);
        this->log.push_back(time_end);
    };

    int tick_spent()
    {
        this->CurService_TickSpend++;
        return this->CurService_TickSpend;
    };

    bool process_end()
    {
        this->CurService_Number++;
        return (this->CurService_Number >= this->Service_List.size()) ? true : false;
    };

    void timeout(int time)
    {
        this->CurService_TickSpend = 0;
        this->CurService.time_req -= time;
    };

    service_t next_service()
    {
        this->CurService_TickSpend = 0;
        this->CurService = this->Service_List[this->CurService_Number];
        return this->CurService;
    };
};

struct queue_list
{
    vector<vector<process_t>> ready_queue; // Ready queue with multible level
    vector<process_t> finish_queue;        // Queue for finished processes
    vector<process_t> disk_queue;          // Queue for Disk I/O service
    vector<process_t> keybd_queue;         // Queue for Keyboard I/O service
    vector<process_t> mutex_queue;         // Queue for mutex locked processes
    vector<process_t> unblock_queue;       // Queue for mutex unlocked processes

    vector<int> ready_CurProcess_id;
    vector<int> ready_PreProcess_id;
    vector<bool> Process_running;

    int tick;
    int mutex;

    queue_list(int level) : ready_CurProcess_id(level, -1), ready_PreProcess_id(level, -1), Process_running(level, false), tick(0), mutex(1) { ready_queue.resize(level); }
};

vector<process_t> read_processes(string input_path);
void log_output(vector<process_t> process_queue, string scheduleName, string output_path);
void move_process(vector<process_t> &queue1, vector<process_t> &queue2);
vector<process_t> scheduler(vector<process_t> process_queue, string scheduleName, int level);
void service(queue_list &queue_data, process_t &CurProcess, string scheduleName, int time);
void lock_mutex(queue_list &queue_data, process_t &CurProcess, string scheduleName, int time);
void unlock_mutex(queue_list &queue_data, process_t &CurProcess, string scheduleName, int time);

int main(int argc, char *argv[])
{
    try
    {
        if (argc < 4)
            throw invalid_argument("too few arguments");

        string scheduleName = argv[1], input_path = argv[2], output_path = argv[3];
        for (auto &subchar : scheduleName)
            subchar = toupper(subchar);
        if (scheduleName != "FCFS" && scheduleName != "RR" && scheduleName != "FB")
            throw invalid_argument("scheduleName " + scheduleName + " not supported");
        auto process_queue = read_processes(input_path);

        if (scheduleName == "FCFS")
            process_queue = scheduler(process_queue, scheduleName, 1);
        else if (scheduleName == "RR")
            process_queue = scheduler(process_queue, scheduleName, 1);
        else if (scheduleName == "FB")
            process_queue = scheduler(process_queue, scheduleName, FB_level);

        log_output(process_queue, scheduleName, output_path);
    }
    catch (const exception &error)
    {
        cerr << "Error: " << error.what() << " (" << typeid(error).name() << ")" << endl;
    }

    return EXIT_SUCCESS;
}

vector<process_t> read_processes(string input_path)
{
    vector<process_t> process_list;
    ifstream infile(input_path);
    if (!infile.is_open())
        throw logic_error("fail to read " + input_path);
    string instring;

    while (getline(infile, instring))
    {
        process_t NewProcess;
        stringstream converter(instring);
        converter.ignore(instring.length(), '#');
        converter >> NewProcess.process_id >> NewProcess.arr_time >> NewProcess.service_total;

        for (int i = 0; i < NewProcess.service_total; i++)
        {
            getline(infile, instring);
            stringstream converter(instring);
            string service_type, time;
            converter >> service_type >> time;
            service_t service(service_type, time);
            NewProcess.Service_List.push_back(service);
        }
        NewProcess.load_service();
        process_list.push_back(NewProcess);
    }

    infile.close();
    return process_list;
}

void log_output(vector<process_t> process_queue, string scheduleName, string output_path)
{
    if (Prefix /* || exists(output_path) */)
    {
        cout << output_path << " is already existed or prefix setting is on; ";
        output_path = scheduleName + "_" + output_path;
        cout << "the program will creat new file with name " << output_path << endl;
    }

    ofstream outfile(output_path);
    if (!outfile.is_open())
        throw logic_error("fail to write " + output_path);

    for (auto process : process_queue)
    {
        outfile << "process " << process.process_id << endl;
        for (auto time : process.log)
            outfile << time << " ";
        outfile << endl;
    }

    outfile.close();
}

void move_process(vector<process_t> &queue1, vector<process_t> &queue2)
{
    if (queue1.empty())
        throw underflow_error("queue underflow");
    queue2.push_back(queue1.front());
    queue1.erase(queue1.begin());
}

vector<process_t> scheduler(vector<process_t> process_queue, string scheduleName, int level)
{
    queue_list queue_data(level);

    for (queue_data.tick = 0; queue_data.tick < MAX_Tick; queue_data.tick++)
    {
        // Process arrived
        for (auto process : process_queue)
            if (process.arr_time == queue_data.tick)
                queue_data.ready_queue[0].push_back(process);

        // Reset when ready queue is empty
        for (int i = 0; i < level; i++)
            if (queue_data.ready_queue[i].empty())
                queue_data.ready_PreProcess_id[i] = -1;

        // Handling process from mutex unblock
        if (!queue_data.unblock_queue.empty())
        {
            process_t &CurProcess = queue_data.unblock_queue.front();
            if (CurProcess.process_end())
                move_process(queue_data.unblock_queue, queue_data.finish_queue);
            else if (CurProcess.next_service().service_type == "C") // Next service is C
                move_process(queue_data.unblock_queue, queue_data.ready_queue[CurProcess.from_queue]);
        }

        // Handling disk_queue
        if (!queue_data.disk_queue.empty())
        {
            process_t &CurProcess = queue_data.disk_queue.front();
            if (CurProcess.tick_spent() >= CurProcess.CurService.time_req)
            {
                if (CurProcess.process_end())
                    move_process(queue_data.disk_queue, queue_data.finish_queue);
                else if (CurProcess.next_service().service_type == "C") // Next service is C
                    move_process(queue_data.disk_queue, queue_data.ready_queue[CurProcess.from_queue]);
                else if (CurProcess.next_service().service_type == "K") // Next service is K
                    move_process(queue_data.disk_queue, queue_data.keybd_queue);
            }
        }

        // Handling keybd_queue
        if (!queue_data.keybd_queue.empty())
        {
            process_t &CurProcess = queue_data.keybd_queue.front();
            if (CurProcess.tick_spent() >= CurProcess.CurService.time_req)
            {
                if (CurProcess.process_end())
                    move_process(queue_data.keybd_queue, queue_data.finish_queue);
                else if (CurProcess.next_service().service_type == "C") // Next service is C
                    move_process(queue_data.keybd_queue, queue_data.ready_queue[CurProcess.from_queue]);
                else if (CurProcess.next_service().service_type == "D") // Next service is D
                    move_process(queue_data.keybd_queue, queue_data.disk_queue);
            }
        }

        // Handling ready_queue
        for (int i = 0; i < level; i++)
            if (!queue_data.ready_queue[i].empty())
            {
                if (scheduleName == "FB" && any_of(queue_data.Process_running.cbegin() + i + 1, queue_data.Process_running.cend(), [](bool i) { return i; }))
                    continue;

                process_t &CurProcess = queue_data.ready_queue[i].front();
                queue_data.ready_CurProcess_id[i] = CurProcess.process_id;
                if (queue_data.ready_CurProcess_id[i] != queue_data.ready_PreProcess_id[i])
                {
                    if (scheduleName == "FB")
                        queue_data.Process_running[i] = true;
                    CurProcess.despatch_time = queue_data.tick;
                }
                queue_data.ready_PreProcess_id[i] = queue_data.ready_CurProcess_id[i];
                CurProcess.from_queue = i;

                if (CurProcess.tick_spent() >= CurProcess.CurService.time_req) // Service is completed
                {
                    if (scheduleName == "FB")
                        queue_data.Process_running[i] = false;
                    service(queue_data, CurProcess, scheduleName, CurProcess.CurService_TickSpend);
                }
                else if (scheduleName == "RR" && CurProcess.CurService_TickSpend == RR_tick) // scheduler is RR (K = 5)
                {
                    CurProcess.timeout(RR_tick);
                    CurProcess.log_write(CurProcess.despatch_time, queue_data.tick + 1);
                    move_process(queue_data.ready_queue[i], queue_data.ready_queue[i]);
                }
                else if (scheduleName == "FB" && CurProcess.CurService_TickSpend == FB_tick) // scheduler is FB (K = 5)
                {
                    CurProcess.timeout(FB_tick);
                    CurProcess.log_write(CurProcess.despatch_time, queue_data.tick + 1);
                    queue_data.Process_running[i] = false;
                    move_process(queue_data.ready_queue[i], queue_data.ready_queue[(i + 1 < FB_level) ? i + 1 : i]);
                }

                break;
            }

        // Complete all process / error handler
        if (queue_data.finish_queue.size() == process_queue.size())
            break;
        else if (queue_data.finish_queue.size() > process_queue.size())
            throw overflow_error("queue overflow");
    }

    return queue_data.finish_queue;
}

void service(queue_list &queue_data, process_t &CurProcess, string scheduleName, int time)
{
    if (CurProcess.process_end()) // All service is completed
    {
        CurProcess.log_write(CurProcess.despatch_time, queue_data.tick + 1);
        move_process(queue_data.ready_queue[CurProcess.from_queue], queue_data.finish_queue);
    }
    else if (CurProcess.next_service().service_type == "D") // Next service is D
    {
        CurProcess.log_write(CurProcess.despatch_time, queue_data.tick + 1);
        move_process(queue_data.ready_queue[CurProcess.from_queue], queue_data.disk_queue);
    }
    else if (CurProcess.next_service().service_type == "K") // Next service is K
    {
        CurProcess.log_write(CurProcess.despatch_time, queue_data.tick + 1);
        move_process(queue_data.ready_queue[CurProcess.from_queue], queue_data.keybd_queue);
    }
    else if (CurProcess.next_service().service_type == "L") // Next service is Lock mtx
        lock_mutex(queue_data, CurProcess, scheduleName, time);
    else if (CurProcess.next_service().service_type == "U") // Next service is Unlock mtx
        unlock_mutex(queue_data, CurProcess, scheduleName, time);
    else if (CurProcess.next_service().service_type == "C") // Next service is C
    {
        if (scheduleName == "RR" && (time + CurProcess.CurService.time_req >= RR_tick))
        {
            CurProcess.log_write(CurProcess.despatch_time, queue_data.tick + 1);
            move_process(queue_data.ready_queue[0], queue_data.ready_queue[0]);
        }

        if (scheduleName == "FB" && (time + CurProcess.CurService.time_req >= FB_tick))
        {
            CurProcess.log_write(CurProcess.despatch_time, queue_data.tick + 1);
            for (int i = 0; i < FB_level; i++)
                if (CurProcess.from_queue == i)
                    move_process(queue_data.ready_queue[i], queue_data.ready_queue[(i + 1 < FB_level) ? i + 1 : i]);
        }
    }
}

void lock_mutex(queue_list &queue_data, process_t &CurProcess, string scheduleName, int time)
{
    queue_data.mutex--;

    if (queue_data.mutex < 0)
    {
        CurProcess.log_write(CurProcess.despatch_time, queue_data.tick + 1);
        move_process(queue_data.ready_queue[CurProcess.from_queue], queue_data.mutex_queue);
    }
    else
        service(queue_data, CurProcess, scheduleName, time);
}

void unlock_mutex(queue_list &queue_data, process_t &CurProcess, string scheduleName, int time)
{
    if (queue_data.mutex < 0)
        move_process(queue_data.mutex_queue, queue_data.unblock_queue);
    service(queue_data, CurProcess, scheduleName, time);

    queue_data.mutex++;
}