#include <unistd.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
int main()
	{
		while (1)
		{
			char programName[50];
			cout<< "enter a program name"<<endl;
			cin >> programName;
			
			pid_t pid = fork();
			if(pid == 0){ // if child
				execl(programName, 0);
				perror("error");
				exit(1);
			}else if (pid > 0){//if parent
				cout<<"Parent child's pid is"<<pid<<endl;
				wait(NULL);
			}
		}
	}
	
	
	
	/*
	*/
