// Basic instructions for mini-shell:
//     Tab Key:        Files suggestion
//     Arrow Key Up:   Previous arguments
//     Arrow Key Down: Next arguments

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>

#include <readline/history.h>
#include <readline/readline.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;

//Maximum number of arguments to pass for execute, default is 16
#define MaxArgvLen 16

pid_t pid;
int status, sigflag;

struct pid_data
{
    pid_t pid;
    string status;
    vector<string> Arg;
};
vector<pid_data> pid_table;
vector<string> fgArg_pass;

void backforeground(char *Arg[MaxArgvLen], int argLen, bool bgOnOff);
void sigint_handler(int sig);
void listFunction();
void exitFunction();

int main()
{
    rl_bind_keyseq("\\e[A", rl_get_previous_history);
    rl_bind_keyseq("\\e[B", rl_get_next_history);
    rl_bind_key('\t', rl_complete);
    using_history();
    cout << "Mini-Shell build by c++" << endl;

    for (;;)
    {
        signal(SIGINT, SIG_IGN);
        signal(SIGTSTP, SIG_IGN);

        int argLength = 0;
        char *input = readline("sh >");
        add_history(input);
        char *token = strtok(input, " \t");
        char *funcName = NULL, *arg[MaxArgvLen] = {NULL};

        funcName = (char *)token;
        token = strtok(NULL, " \t");
        while (token != NULL)
        {
            arg[argLength++] = (char *)token;
            token = strtok(NULL, " \t");
        }

        if (funcName == NULL)
            cout << "No input arguments" << endl;
        else if (strcmp(funcName, "bg") == 0) //Command to run process in background
            backforeground(arg, argLength, true);
        else if (strcmp(funcName, "fg") == 0) //Command to run process in foreground
            backforeground(arg, argLength, false);
        else if (strcmp(funcName, "exit") == 0 || strcmp(funcName, "ex") == 0) //Command to exit program
            exitFunction();
        else if (strcmp(funcName, "list") == 0 || strcmp(funcName, "ls") == 0) //Command to list process
            listFunction();
        else if (strcmp(funcName, "clear") == 0 || strcmp(funcName, "cls") == 0) //Command to clear terminal
            system("clear");
        else if (strcmp(funcName, "date") == 0) //Command to check time and date
            system("date");
        else if (strcmp(funcName, "g++ver") == 0) //Command to check g++ version
            system("g++ --version");
        else //all the not supported function
            cout << funcName << " :command not found" << endl;

        free(input);
        free(token);
    }
    return 0;
}

//Function for both foreground and background (background mode when bgOnOff is true)
void backforeground(char *Arg[MaxArgvLen], int argLen, bool bgOnOff)
{
    sigflag = 0; //Check if SIGINT or SIGTSTP were sent before the process completed normally
    if (bgOnOff == true)
    {
        pid = waitpid(-1, &status, WNOHANG | WUNTRACED);
        signal(SIGCHLD, sigint_handler);
        signal(SIGINT, SIG_IGN);
        signal(SIGTSTP, SIG_IGN);
    }
    else
    {
        signal(SIGCHLD, SIG_IGN);
        signal(SIGINT, sigint_handler);
        signal(SIGTSTP, sigint_handler);
    }

    if (Arg[0] == NULL)
        if (bgOnOff == true)
            cout << "Usage: bg [path of executable file] [a list of arguments]" << endl;
        else
            cout << "Usage: fg [path of executable file] [a list of arguments]" << endl;
    else
    {
        switch (pid = fork())
        {
        case (-1): //Fork error
            cout << "Error: fork() failed!" << endl;
            break;

        case (0): //Child process
            if (execvp((const char *)Arg[0], Arg) < 0)
                cout << "Error: execvp() failed!" << endl;
            exit(EXIT_SUCCESS);
            break;

        default: //Parent process
            if (bgOnOff == true)
                pid_table.push_back({pid, "running", vector<string>(Arg, Arg + argLen)});
            else
            {
                fgArg_pass = vector<string>(Arg, Arg + argLen);
                waitpid(pid, &status, (int)NULL);
                if (sigflag == 0)
                    cout << "Process " << pid << " completed" << endl;
            }
            break;
        }
    }
}

//Signal handling function
void sigint_handler(int sig)
{
    if (pid > 0) //!Never run as child
    {
        switch (sig)
        {
        case SIGINT: //Handling signal SIGINT
            cout << "\nsh >Process " << pid << " terminated" << endl;
            sigflag = 1;
            kill(pid, SIGTERM);
            break;

        case SIGTSTP: //Handling signal SIGTSTP
            cout << "\nsh >Process " << pid << " stopped" << endl;
            sigflag = 1;
            pid_table.push_back({pid, "stopped", fgArg_pass});
            kill(pid, SIGTERM);
            break;

        case SIGCHLD: //Handling signal SIGCHLD (remove pid from the pid table if it is completed)
            pid = waitpid(-1, &status, WNOHANG | WUNTRACED);
            cout << "Process " << pid << " completed" << endl;
            for (auto iter = pid_table.begin(); iter != pid_table.end(); ++iter)
            {
                if (iter->pid == pid)
                {
                    iter = pid_table.erase(iter);
                    break;
                }
            }
        }
    }
}

//Function to list all running or paused process
void listFunction()
{
    for (int i = 0; i < pid_table.size(); i++)
    {
        cout << pid_table[i].pid << ": " << pid_table[i].status;
        for (int j = 0; j < pid_table[i].Arg.size(); j++)
            cout << " " << pid_table[i].Arg[j];
        cout << endl;
    }
}

//Function handling exit and termination for the child process
void exitFunction()
{
    signal(SIGCHLD, SIG_IGN);
    for (int i = 0; i < pid_table.size(); i++)
    {
        if (pid_table[i].status.compare((string) "running") == 0)
        {
            cout << "Process " << pid_table[i].pid << " terminated" << endl;
            kill(pid_table[i].pid, SIGTERM);
        }
    }

    cout << "Mini Shell will be terminated" << endl;
    exit(EXIT_SUCCESS);
}