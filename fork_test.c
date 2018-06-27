#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define cycles 1000

int main(int argc, char const *argv[])
{
		
	int delay;
	int pid;
	int operations;

	time_t time;

	for (int i = 0; i < 5; ++i)
	{
		delay=rand()%11;
		sleep(delay);
		pid=fork();
		if (pid==0)
		{
			time = time(NULL)
			printf("Procces started: pid =%d, time %s %ju \n",getpid(),asctime(localtime(&time)),(uintmax_t)time );
			i=5;
		}
	}
	if (pid==0)
	{
		operations = (rand()%11)*cycles;
		for (int i = 0; i < operations; ++i);
		time = time(NULL)
	printf("Procces finished: pid =%d, ops = operations, time: %s %ju \n",getpid(),asctime(localtime(&time)),(uintmax_t)time );
	}

	return 0;
}