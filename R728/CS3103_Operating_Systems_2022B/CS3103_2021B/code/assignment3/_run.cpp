#include <chrono>
#include <iostream>
#include <numeric>
#include <stdexcept>
#include <string>
#include <vector>

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;
using namespace std::chrono;

struct details
{
    int NumSchedule, NumSample;
    string ProgName, InputSetName, FileType;
    string ScheduleName;

    void set(int i, int j, string name, string set, string type) { NumSample = i, NumSchedule = j, ProgName = name, InputSetName = set, FileType = type; }
};

int main(int argc, char *argv[])
{
    try
    {
        vector<double> timer;
        vector<string> comment;
        details running;

        if (argc < 6)
            running.set(4, 3, "./schedule", "sample_", ".txt");
        else
            running.set(atoi(argv[1]), atoi(argv[2]), argv[3], argv[4], argv[5]);

        for (int i = 0; i < running.NumSample; i++)
            for (int j = 0; j < running.NumSchedule; j++)
            {
                if (j == 0)
                    running.ScheduleName = "FCFS";
                else if (j == 1)
                    running.ScheduleName = "RR";
                else if (j == 2)
                    running.ScheduleName = "FB";

                int status;
                string InputName = running.InputSetName + to_string(i) + running.FileType;
                string OutputName = running.InputSetName + to_string(i) + "_" + running.ScheduleName + running.FileType;
                auto start = high_resolution_clock::now();

                switch (pid_t pid = fork())
                {
                case (-1): //Fork error
                    throw runtime_error("fork fails");
                    break;

                case (0): //Child process
                    if (execlp(running.ProgName.c_str(), running.ProgName.c_str(), running.ScheduleName.c_str(), InputName.c_str(), OutputName.c_str(), NULL) < 0)
                        throw runtime_error("execlp fails");
                    break;

                default: //Parent process
                    waitpid(pid, &status, (int)NULL);
                    break;
                }

                auto stop = high_resolution_clock::now();
                timer.push_back(duration_cast<microseconds>(stop - start).count());
                comment.push_back(running.ProgName + "\t" + running.ScheduleName + "\t" + InputName + "\t" + OutputName);
            }

        for (int i = 0; i < running.NumSample * running.NumSchedule; i++)
            cout << "[" << i + 1 << "] Time taken for \"" << comment[i] << "\"\t:" << timer[i] / (double)1000 << " milliseconds" << endl;
        cout << "Average Time taken\t:" << accumulate(timer.begin(), timer.end(), 0.0) / timer.size() / (double)1000 << " milliseconds" << endl;
    }
    catch (const exception &error)
    {
        cerr << "Error: " << error.what() << " (" << typeid(error).name() << ")" << endl;
    }

    return EXIT_SUCCESS;
}