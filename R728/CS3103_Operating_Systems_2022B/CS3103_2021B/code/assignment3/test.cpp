#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<bool> val = {true, false, false};

    if (any_of(val.cbegin() + 1, val.cend(), [](bool i) { return i; }))
        cout << "yes" << endl;

    return 0;
}

// void cout_checker(vector<process_t> process_queue)
// {
//     for (auto process : process_queue)
//     {
//         cout << process.process_id << " " << process.arr_time << " " << process.service_total << endl;
//         cout << "CurService: " << process.CurService.service_type << " " << process.CurService.time_req << " ";
//         cout << process.CurService_Number << " " << process.CurService_TickSpend << endl;
//         for (auto service : process.Service_List)
//             cout << service.service_type << " " << service.time_req << endl;
//         cout << endl;
//     }
// }

// void log_test(vector<process_t> &process_queue)
// {
//     int i = 0;
//     for (auto &process : process_queue)
//     {
//         process.log.push_back(i++);
//         process.log.push_back(i++);
//         process.log.push_back(i++);
//         process.log.push_back(i++);
//     }
// }

// if (CurProcess.CurService_Number + 1 < CurProcess.Service_List.size() && CurProcess.Service_List[CurProcess.CurService_Number + 1].service_type == "C")
//     CurProcess.log_write(tick + 1);