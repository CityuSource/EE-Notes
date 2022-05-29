#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <utility>
#include <vector>
using namespace std;

struct Process {
    pid_t pid;
    string file_info;                   // Structure to keep information about a process
    bool running;
};

bool complete = false;                  // bool value to keep track if the foreground process wasn't completed or not
pid_t foreGround = -1;                  // pid value for the current foreground process
vector <Process> allProcesses;          // vector keeping track of all the active and stopped processes

Process create_process(pid_t, string);  // creating a process structure
void background_process(char*);         // running background processes
bool change_procesStatus(pid_t);        // changing status of a process from running to stop or vice-versa
void exit_shell();                      // terminate the shell
void foreground_process(char*);         // running foreground processes
void halt_shell();                      // halt the shell to execute a foreground process
bool input_matches(char*, char*);       // to check if input matches with set strings
void kill_process(int);                 // kill a process ie. ctrl + c
void list_allProcesses();               // list all running and stopped processes
void remove_process(pid_t);             // remove a process from the allProcesses vector
void resume_process(char*);             // resume a stopped process
void soul_reaper(int);                  // reaping already dead processes
void stop_process(int);                 // stop a process that's already running ie. ctrl + z

int main(int argc, char **argv) {
    
    
    signal(SIGCHLD, &soul_reaper);
    signal(SIGINT, &kill_process);      // Signal handling for reaping processes, ctrl + z, ctrl + c
    signal(SIGTSTP, &stop_process);
    
    while (true){
        printf("sh >");
        char process_information[256], fg[3]="fg", bg[3] = "bg", cont[5]="cont";
        cin.getline(process_information, 256, '\n');
        
        // if-else block to validate the user input, and call the corresponding functions.
        if (strcmp(process_information, "exit") == 0)
            exit_shell();
        else if (strcmp(process_information, "list") == 0)
            list_allProcesses();
        else if (input_matches(process_information, cont))
            resume_process(process_information + 5);
        else if (input_matches(process_information,fg))
            foreground_process(process_information + 3);
        else if (input_matches(process_information,bg))
            background_process(process_information + 3);
        else if (strlen(process_information) == 0)
            printf("Empty Input. Please try again.\n");
        else
            printf("Wrong input. Please try again.\n");
    }
}

Process create_process(pid_t pid, string file_information){
    Process newProcess;
    newProcess.pid = pid;
    newProcess.file_info = file_information;    // creating and returning a new process
    newProcess.running = true;
    return newProcess;
}

void background_process(char* process_information){
    if (strlen(process_information) == 0){  // Error handling
        printf("Missing file information. Please try again.\n");
        return;
    }
    char *args[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //Assuming there will not be more than 21 arguments.
    char *word = strtok(process_information, " \t");
    args[0] = word;
    string file_information = string(word); // storing all the information about a file in one big string
    int argCount = 1;
    while ((word = strtok(NULL," \t"))){    // adding arguments untill the end of c-string
        if (argCount == 21){                // Checking if there are more than 21 arguments
            printf("Too many arguments to unpack.\n");
            return;
        }
        file_information += " " + string(word); // storing the information about the cpp file in a string
        args[argCount] = word;
        argCount++;
    }
    
    pid_t pid = fork();
    if (pid > 0)        // in the parent process pushing the newly created process into the vector containing all active processes
        allProcesses.emplace_back(create_process(pid, file_information));
    else if (pid == 0) {    // in the child process running the given c++ file
        setpgid(getpid(),getpid());
        if (execvp(args[0], args) < 0){
            printf("execvp failed for this process.\n");
            exit(EXIT_FAILURE);
        }
    }
    else
        printf("Fork Failed.\n");
}

bool change_procesStatus(pid_t pid){
    for (auto process = allProcesses.begin(); process != allProcesses.end(); process++)
        if (process->pid == pid) {      // linear searching for the pid and changing its status from running to stopped or from stopped to running.
            process->running = not (process->running);
            return true;
        }
    return false;
}

void exit_shell(){
    for (Process process: allProcesses){    // iterating over all processes using a for-each loop
        int status;
        kill(process.pid, SIGKILL);     // killing a process using SIGKILL. We are using SIGKILL and SIGTERM because SIGTERM can't communicate with stopped processes.
        pid_t pid = waitpid(-1, &status, WNOHANG);
        while(!pid)     // waiting for the killed process to be reaped
            pid = waitpid(-1, &status, WNOHANG);
        printf("Process %d terminated\n", (int)process.pid);
    }
    exit(EXIT_SUCCESS);
}

void foreground_process(char* process_information){
    if (strlen(process_information) == 0){
        printf("Missing file information. Please try again.\n");
        return;
    }
    char *args[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //Assuming there will not be more than 20 arguments.
    char *word = strtok(process_information, " \t");
    args[0] = word;
    string file_information = string(word);             // storing all the information about a file in one big string
    int argCount = 1;
    while ((word = strtok(NULL," \t"))){
        if (argCount == 21){
            printf("Too many arguments to unpack.\n");  // Checking if there are more than 21 arguments
            return;
        }
        file_information += " " + string(word);         // adding arguments untill the end of c-string
        args[argCount] = word;
        argCount++;
    }
    
    pid_t pid = fork();
    if (pid == 0){
        setpgid(getpid(),getpid());
        if (execvp(args[0], args) < 0){
            printf("execvp failed for this process.\n");
            exit(EXIT_FAILURE);
        }
    }
    else if (pid > 0){      // in the parent process pushing the newly created process into the vector containing all active processes
        allProcesses.emplace_back(create_process(pid, file_information));
        foreGround = pid;   // keeping track of the pid of the process running in foreground
        halt_shell();       // halting the shell for the foreground process
    }
    else
        printf("Fork Failed.\n");
}

void halt_shell(){
    while (not complete)    // A busy loop that runs while the foreground process is not complete
        sleep(1);
    complete = not complete;
}

bool input_matches(char* input, char toCheck[]) {
    for (int i=0; toCheck[i] != '\0' and input[i] != '\0'; i++) // running a loop till toCheck or input ends
        if (input[i] != toCheck[i])     // If any character doesn't match we return false
            return false;
    return true;
}

void kill_process(int signal){
    if (foreGround != -1)       // Checking if there is a foreground process to kill
        kill(foreGround, SIGTERM);  // terminating the process using SIGTERM
}

void list_allProcesses(){
    if (allProcesses.size() == 0)
        printf("No processes are currently running.\n");
    else
        for (Process process:allProcesses){
            printf("%d: ",(int)process.pid);
            if (process.running)
                printf("running ");
            else
                printf("stopped ");
            cout << process.file_info << endl;  // printf doesn't support string so cout is used
        }
}

void remove_process(pid_t pid){
    for (auto process = allProcesses.begin(); process != allProcesses.end(); process++)
        if (process->pid == pid) {      // linearly iterates over all processes and removes the process that isn't active anymore
            allProcesses.erase(process);
            return;
        }
}

void resume_process(char* info) {
    pid_t pid = (pid_t) atoi(info);         // converting c-string to integer using the inbuilt atoi function
    for (auto process = allProcesses.begin(); process != allProcesses.end(); process++)
        if (process->pid == pid and not process->running) { // Checks if a process is not running and matches the given pid
            process->running = true;        // Changes status of the process
            foreGround = process->pid;      // add the new process to the foreground
            kill(process->pid, SIGCONT);    // give the continue signal to the stopped process so it can resume
            halt_shell();                   // halting the shell for the foreground process
            return;
        }
    printf("No stopped process found with ID:%d.\n",(int)pid);
}

void soul_reaper(int signal){
    int status;
    pid_t pid;
    while ((pid = waitpid(-1, &status, WNOHANG | WUNTRACED)) >0) {
        if (WIFEXITED(status)) {
            remove_process(pid);    // WIFEEXITED is used to check if a process is executed normally
            printf("Process %d completed\n", (int)pid);
        }
        else if (not WIFSTOPPED(status)){
            remove_process(pid);    // not WIFESTOPPED is used to check if a process is not stopped
            printf("Process %d terminated\n", (int)pid);
        }
        else
            printf("Process %d stopped\n",(int)pid);
        
        if (foreGround != -1) {     //  Checks if there is a foreground process and changes variables accprdingly.
            foreGround = -1;
            complete = not complete;
        }
    }
}

void stop_process(int signal){
    if (foreGround != -1) {                 // Checks if there is a foreground process or not
        change_procesStatus(foreGround);    // changes the status of the foreground process from running to stopped.
        kill(foreGround, SIGTSTP);          // sending the SIGTSTP to the foreground process to stop it.
    }
}
