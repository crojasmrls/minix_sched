#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define cycles 100000000

int main(int argc, char const *argv[])
{
		
	int delay;
	int pid;
	int operations;
	int a=0;
	time_t now;
	now = time(NULL);
	printf("Parent started: pid =%d, %s \n",getpid(),asctime(localtime(&now)) );

	for (int i = 0; i < 5; ++i)
	{
		delay=rand()%11;
		sleep(delay);
		pid=fork();
		if (pid==0)
		{
			now = time(NULL);
			printf("Procces started: pid =%d, %s \n",getpid(),asctime(localtime(&now)) );
			i=5;
		}
	}
	if (pid==0)
	{
		operations = (rand()%11)*cycles;
		for (int i = 0; i < operations; ++i);{
			for (int j = 0; j < operations; ++j);{
				a=a+a;
			}
		}
		now = time(NULL);
		printf("Procces finished: pid =%d, ops = %d, %s \n",getpid(),operations,asctime(localtime(&now)));
	}
	if (pid=!0)
	{
		now = time(NULL);
		printf("Parent finished: pid =%d, %s \n",getpid(),operations,asctime(localtime(&now)));
	}

	return 0;
}