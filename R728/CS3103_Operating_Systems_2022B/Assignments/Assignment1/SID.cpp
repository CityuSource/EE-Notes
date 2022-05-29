/* ---------------------- Program: Mini Shell in Linux ---------------------- */
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <readline/readline.h>
#include <readline/history.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <map>
#include <filesystem>
#include <algorithm>
using namespace std;
/* ----------------------------- Custom Structs ----------------------------- */
struct Process
{
    pid_t processId;
    string status;
    char **arg;
    char *name;
};
/* ------------------- Environment Variables set globally ------------------- */
map<string, int> functions;
vector<Process> processList;
char cwd[512];
/* ------------------- List of functions defined and used ------------------- */
void initFunctions();
void exitFunction(int signum);
void changeDirectory();
void listDirectory();
void runBackground(char **arguments);
void killProcess(pid_t pid);
void killProcess(char **arguments);
void showProcess();
void handleCommand(char *funcName, char **arguments);
void signalComplete(int signum);
void signalStop(int signum);
/* ----------------------- Functions are defined here ----------------------- */
void initFunctions() // Map functions to an integer for use in the main's switch case
{
    functions["quit"] = 0;
    functions["cd"] = 1;
    functions["ls"] = 2;
    functions["run"] = 3;
    functions["kill"] = 4;
    functions["ps"] = 5;
    functions[""] = 6;
}

void exitFunction(int signum)
{ // Using the processList we just kill everything that's in there and kill this program
    for (int i = 0; i < processList.size(); i++)
        if (processList[i].status.compare((string) "running") == 0)
        {
            printf("Process with ID %d and name '%s' terminated.\n", processList[i].processId, processList[i].name);
            kill(processList[i].processId, SIGTERM);
        }

    exit(EXIT_SUCCESS);
}

void changeDirectory(char *dir, string prev)
{
    if (dir == NULL) // Check if user inputted any argument
        printf("cd [path].\n");
    else
    {
        string buffer = dir;
        if (chdir(buffer.c_str())) // Check if directory change is successful
        {
            perror("cd failed.\n");
            chdir(prev.c_str());
        }
    }
}

void listDirectory()
{
    string path = cwd, buffer;
    int size = path.length();
    // Using filesystem's directory_iterator we can easily get an array of the directorie's contents as objects
    for (const auto &entry : filesystem::directory_iterator(path))
    {
        buffer = entry.path().string();
        buffer = buffer.substr(size + 1, buffer.length());
        if (entry.is_directory()) // Check if its a folder then we just add an extra '/'
            printf("/%s\n", buffer.c_str());
        else
            printf("%s\n", buffer.c_str());
    }
}

void runBackground(char **arguments)
{
    if (arguments[0] == NULL) // Check if user inputted any arguments
        printf("run [path of executable file] [a list of arguments]\n");
    else
    {
        pid_t processId;
        switch (processId = fork()) // Start the fork() process and check the result
        {
        case -1:
            printf("Process startup failed due to fork() error!\n");
            break;

        case 0:
            if (execvp((const char *)arguments[0], arguments) < 0)
                perror("execvp");
            exit(EXIT_SUCCESS);
            break;

        default:
            processList.push_back({processId, "running", arguments, arguments[0]});
            printf("Starting process with ID %d and name '%s' running in background.\n", processId, arguments[0]);
            break;
        }
    }
}

bool isWord(const string &s) // Helper function for killProcess()
{
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it))
        ++it;
    return !s.empty() && it == s.end();
}

void killProcess(pid_t pid) // An overload function to help signal handler
{
    for (int i = 0; i < processList.size(); i++)
        if (processList[i].processId == pid)
        {
            kill(pid, SIGTERM);
            processList.erase(processList.begin() + i);
            return;
        }
}

void killProcess(char **arguments)
{
    if (arguments[0] == NULL) // Check if user inputted any argument
        printf("kill [Process ID].\n");
    else if (!isWord(arguments[0])) // Check if user inputted anything other than a Process ID
        printf("Invalid Process ID.\n");
    else
    { // Then we check if the given process ID is in the processList
        pid_t temp = stoi(arguments[0]);
        for (int i = 0; i < processList.size(); i++)
            if (processList[i].processId == temp)
            {
                kill(temp, SIGTERM);
                printf("Process %d killed.\n", temp);
                processList.erase(processList.begin() + i);
                return; // Return once we found and killed the process in the processList
            }
    } // Well if it's not in the processList then we just tell user it's not there
    printf("Process ID of %s not found.\n", arguments[0]);
}

void showProcess()
{
    if (processList.size() < 1) // Check if processList is empty
        printf("No processes running.\n");

    for (int i = 0; i < processList.size(); i++) // If it isn't then we just output everything in the list
        printf("%d: ./%s\n", processList[i].processId, processList[i].name);
}

void handleCommand(char *funcName, char **arguments)
{
    /* ---- Decide what to do after getting the command stored into funcName ---- */
    if (funcName == NULL) // Do nothing if they input nothing
        return;

    int func;
    if (functions.find(funcName) == functions.end()) // Check with the map if command is executable
    {
        printf("Invalid or unknown command\n");
        return;
    }
    else
        func = functions[funcName];

    switch (func) // Check which functions to execute
    {
    case 0:
        // Quit function using "quit"
        exitFunction(1);
        break;

    case 1:
        // Change directory function using "cd"
        changeDirectory(arguments[0], cwd);
        break;

    case 2:
        // Listing contents using "ls"
        listDirectory();
        break;

    case 3:
        // Running programs in the background with arguments using "run ./example argument1 argument2 argument3"
        runBackground(arguments);
        break;

    case 4:
        // Kill specified program by PID using "kill pid"
        killProcess(arguments);
        break;

    case 5:
        // Show running processes in the program using "ps"
        showProcess();
        break;

    default: // Well this will never execute so dont worry about it
        printf("Rare sentence that should not even be printed but if it did, good job how the hell did u do it\n");
        break;
    }
}

void signalComplete(int signum)
{ // Mainly used for handling processes starting in background which is every single one of the processes
    int status;
    pid_t pid;
    while ((pid = waitpid(-1, &status, WNOHANG | WUNTRACED)) > 0)
    {
        if (WIFEXITED(status))
        {
            killProcess(pid);
            printf("Process %d completed\n", pid);
        }
        else if (not WIFSTOPPED(status))
        {
            killProcess(pid);
            printf("Process %d terminated\n", pid);
        }
        else
            printf("Process %d stopped\n", pid);
    }
}

void signalStop(int signum)
{ // Kill and delete the process that was last added, which will be the last process in processList
    kill(processList.back().processId, SIGTERM);
    processList.pop_back();
}

int main()
{
    /* ------------------------ Setup the signal handlers ----------------------- */
    signal(SIGINT, exitFunction);                     // Setup signal handler for interrupt signal
    signal(SIGCHLD, signalComplete);                  // Setup signal handler for when child process ends or something happened
    signal(SIGTSTP, signalStop);                      // Setup signal handler for stop signal
    initFunctions();                                  // Map all the available functions
    rl_bind_keyseq("\\e[A", rl_get_previous_history); // Add the functionality to go back and forth between
    rl_bind_keyseq("\\e[B", rl_get_next_history);     // Previous inputted commands using arrows keys
    using_history();

    while (1)
    {
        /* -------------------- Setting up the terminal's prompt -------------------- */
        uid_t uid = geteuid();
        struct passwd *pw = getpwuid(uid);
        char *user = pw->pw_name;
        getcwd(cwd, sizeof(cwd));
        char *prompt = (char *)malloc(1024);
        strcpy(prompt, user);
        strcat(prompt, "\033[34m@[\033[35m"); // extra color coding for aesthethics
        strcat(prompt, cwd);
        strcat(prompt, "\033[34m]\033[37m\n> ");

        /* ----------------------------- Take input here ---------------------------- */
        char *input;
        vector<char> arguments;
        input = readline(prompt);
        free(prompt);
        add_history(input); // Add whatever the user inputted so they can reinput using arrow keys if needed

        /* ------------------------- Parse the user's input ------------------------- */
        char *token = strtok(input, " \t"), *funcName = NULL;
        funcName = token; // Grab the command to run
        token = strtok(NULL, " \t");
        char *arg[80] = {NULL};
        for (int i = 0; token != NULL; i++) // Push back all the arguments into a vector
        {
            arg[i] = token;
            token = strtok(NULL, " \t");
        }

        handleCommand(funcName, arg);
    }
}