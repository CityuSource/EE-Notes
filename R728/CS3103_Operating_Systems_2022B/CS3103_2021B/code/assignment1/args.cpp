#include <iostream>
#include <cstring>
#include <readline/readline.h>
#include <readline/history.h>

using namespace std;

int main(){

    char *input = NULL ;
    char prompt[] = "Your command:";
    input = readline("Your command: ");

    cout << "Full command: ["<<input<<"]\n";
    
    char *p = strtok(input," \t"); // cut upon <space> or <tab>
    
    if (!p) {
    	cout << "No words!\n";
    
    } else {
	    cout << "First word: [" << p << "]\n";
	    
	    while (p=strtok(NULL," \t")) {	//strtok return NULL (false) if there's no more
	    	cout << "Next word: [" << p << "]\n";
	    }
    }
    
    return 0;
}

