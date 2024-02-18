#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
void sigint_handler(int signum)
{
	printf("\n Hey I got SIGINT:%d\n\n",signum);
	signal(SIGINT,SIG_IGN);
}
void sigquit_handler(int signum)
{
        printf("\n Hey I got SIGQUIT:%d\n\n",signum);
        signal(SIGQUIT,SIG_IGN);
} 

void sigtstp_handler(int signum)
{
	printf("\n Hey I got SIGSTP:%d\n",signum);
	signal(SIGTSTP,SIG_IGN);
}
void sigfpe_handler(int signum)
{       
        printf("\n Hey I got SIGFPE:%d\n\n",signum);
        signal(SIGFPE,SIG_IGN);
}  void sigkill_handler(int signum)
{       
        printf("\n Hey I got SIGKILL:%d\n\n",signum);
        signal(SIGKILL,SIG_IGN);
}  
int main()
{
	signal(SIGINT,sigint_handler);
	signal(SIGQUIT,sigquit_handler);
	signal(SIGTSTP,sigint_handler);
        signal(SIGFPE,sigquit_handler);
	signal(SIGKILL,sigquit_handler);
	while(1)
	{
		printf("I am in infinite loop\n");
		sleep(1);
	}
	return 0;
}

