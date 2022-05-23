#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>
#include <cstring>

using namespace std;
pid_t fg_pid;             //gobal procress ID
pid_t bg_pid;             //gobal procress ID
int sig_return_value = 0; //value will change when the signal(s) is used.
int sigtstp_and_int_detect_value = 0;
int sigchld_detect_value = 0;
pid_t P_ID[50];
char *P_Status[50], *P_fileL[50], *P_arg1[50], *P_arg2[50], *P_arg3[50]; //set the array which will store out the information of the process(s)

void start_Sh();                                              //starting Shell function
void run_fg(char *fileL, char *arg1, char *arg2, char *arg3); // foreground function
void run_bg(char *fileL, char *arg1, char *arg2, char *arg3); // background function
void listing_Prc();                                           //listing function
void kill_Prc();                                              //process(s) kill function
void sigint_handler(int sig);                                 // SIGINT signal handler
void sigtstp_handler(int sig);                                // SIGTSTP signal handler
void sigchld_handler(int sig);                                // SIGCHLD signal handler

int main(int argc, char **argv)
{
    // main function

    while (1)
    {
        start_Sh();
    } //run start_Sh() function infinity

    return 0;
}

void start_Sh()
{
    //start_Sh() function

    char *data[50]; //set char* array to store the user input
    char *input = NULL;
    char prompt[] = "sh>";            //set the prompt to "sh>"
    input = readline("sh>");          //display the prompt
    char *com = strtok(input, " \t"); //read the user input, cut upon <space> or <tab>

    for (int i = 0; i < 49; i++)
        data[i] = NULL; //clear the array to avoid storing the previous data

    if (!com)
    {
        return;
        //it will return to start_Sh() if user doesn't input anything
    }
    else if ((string)com == "fg")
    {
        int i = 0;

        while (com = strtok(NULL, " \t"))
        {
            data[i] = com;
            i = i + 1;
        }
        if (data[4] != NULL)
        {
            cout << "Arguments error!!\n";
            return;
        }
        run_fg((char *)data[0], (char *)data[1], (char *)data[2], (char *)data[3]);

        return;
    }
    else if ((string)com == "bg")
    {

        int i = 0;
        int p;

        while (com = strtok(NULL, " \t"))
        {
            data[i] = com;
            i = i + 1;
        }
        if (data[4] != NULL)
        {
            cout << "Arguments error!!\n";
            return;
        }
        run_bg((char *)data[0], (char *)data[1], (char *)data[2], (char *)data[3]);

        return;
    }
    else if ((string)com == "list")
    {

        listing_Prc();
        return;
    }
    else if ((string)com == "exit")
    {
        kill_Prc();

        exit(-1);
    }
    else
    {

        cout << "Command not found!!\n";
        return;
    }
    return;
}

void sigint_handler(int sig)
{

    if (fg_pid > 0 && sigtstp_and_int_detect_value == 1)
    {
        sig_return_value = 1;
        printf("Process %d terminated\n", fg_pid);
        kill(fg_pid, SIGTERM);
        //return;
    }
}
void sigtstp_handler(int sig)
{

    if (fg_pid > 0 && sigtstp_and_int_detect_value == 1)
    {
        sig_return_value = 2;
        printf("Process %d stopped\n", fg_pid);
        kill(fg_pid, SIGTSTP);
        //return;
    }
}

void sigchld_handler(int sig)
{

    if (sig == SIGCHLD && sigchld_detect_value == 1)
    {
        int status;
        int i = 0;
        int n = sizeof(P_ID) / sizeof(P_ID[0]);
        bg_pid = waitpid(-1, &status, WNOHANG | WUNTRACED);
        while (i < n)
        {
            if (P_ID[i] == bg_pid)
                break;
            i++;
        }

        P_ID[i] = 0;
        P_Status[i] = P_fileL[i] = P_arg1[i] = P_arg2[i] = P_arg3[i] = NULL;

        printf("Process %d completed \n", bg_pid);
        //return;
    }
}
void run_fg(char *fileL, char *arg1, char *arg2, char *arg3)
{

    if ((string)fileL == "./test")
    {
        char child[] = "./test";
        char *arg_array[] = {
            child, arg1, arg2, arg3, NULL};
        sigchld_detect_value = 0;
        sigtstp_and_int_detect_value = 1;
        int i = 0;
        signal(SIGTSTP, sigtstp_handler);
        signal(SIGINT, sigint_handler);
        fg_pid = fork();
        int status = 0;

        if (fg_pid > 0)
        {

            while (waitpid(-1, &status, WNOHANG | WUNTRACED) == 0)
            {
                sleep(1);
            }

            while (P_ID[i] != 0 && P_Status[i] != NULL && P_fileL[i] != NULL && P_arg1[i] != NULL && P_arg2[i] != NULL && P_arg2[i] != NULL)
            {
                i++;
            }
            P_ID[i] = fg_pid;
            P_Status[i] = (char *)"running";
            P_fileL[i] = fileL;
            P_arg1[i] = arg1;
            P_arg2[i] = arg2;
            P_arg3[i] = arg3;

            if (sig_return_value == 1)
            {
                sig_return_value = 0;
                P_ID[i] = 0;
                P_Status[i] = P_fileL[i] = P_arg1[i] = P_arg2[i] = P_arg3[i] = NULL;
                return;
            }
            else if (sig_return_value == 2)
            {
                sig_return_value = 0;
                P_Status[i] = (char *)"stopping";
                return;
            }
            else
                printf("Process %d completed \n", fg_pid);
            P_ID[i] = 0;
            P_Status[i] = P_fileL[i] = P_arg1[i] = P_arg2[i] = P_arg3[i] = NULL;
            return;
        }

        else if (fg_pid == 0)
        {
            setpgid(0, 0);

            if ((execvp(arg_array[0], arg_array) < 0))
                printf("execvp is failed for process. \n");
        }

        else // fork failed
        {

            printf("fork is failed!\n");
        }
    }

    else
    {

        cout << "invalid path!\n";
        return;
    }

    return;
}

void run_bg(char *fileL, char *arg1, char *arg2, char *arg3)
{

    if ((string)fileL == "./test")
    {
        char child[] = "./test";
        char *arg_array[] = {
            child, arg1, arg2, arg3, NULL};

        signal(SIGCHLD, sigchld_handler);
        sigchld_detect_value = 1;
        sigtstp_and_int_detect_value = 0;
        int status = 0;
        int i = 0;
        bg_pid = fork();
        if (bg_pid > 0)
        {

            while (P_ID[i] != 0 && P_Status[i] != NULL && P_fileL[i] != NULL && P_arg1[i] != NULL && P_arg2[i] != NULL && P_arg2[i] != NULL)
            {
                i++;
            }
            P_ID[i] = bg_pid;
            P_Status[i] = (char *)"running";
            P_fileL[i] = fileL;
            P_arg1[i] = arg1;
            P_arg2[i] = arg2;
            P_arg3[i] = arg3;

            return;
        }
        else if (bg_pid == 0)
        {

            if ((execvp(arg_array[0], arg_array) < 0))
                printf("execvp is failed for process. \n");
        }
        else // fork failed
        {

            printf("fork is failed!\n");
        }
    }
    else
    {

        cout << "invalid path!\n";
        return;
    }

    return;
}

void listing_Prc()
{

    for (int i = 0; i < 49; i++)
    {
        if (P_ID[i] != 0 && P_Status[i] != NULL && P_fileL[i] != NULL && P_arg1[i] != NULL && P_arg2[i] != NULL && P_arg2[i] != NULL)
            cout << P_ID[i] << ": " << P_Status[i] << " " << P_fileL[i] << " " << P_arg1[i] << " " << P_arg2[i] << " " << P_arg3[i] << "\n";
    }
    return;
}

void kill_Prc()
{

    for (int i = 0; i < 49; i++)
    {
        if (P_ID[i] != 0 && P_Status[i] != NULL && P_fileL[i] != NULL && P_arg1[i] != NULL && P_arg2[i] != NULL && P_arg2[i] != NULL)
        {
            kill(P_ID[i], SIGTERM);
            printf("Process %d terminated\n", P_ID[i]);
        }
    }

    return;
}