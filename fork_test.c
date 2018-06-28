#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define cycles 100000

int main(int argc, char const *argv[])
{
		
	int delay;
	int pid;
	int operations;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	time_t now;
	now = time(NULL);
	printf("Parent started: pid =%d, %s \n",getpid(),asctime(localtime(&now)) );

	for (int i = 0; i < 5; ++i)
	{
		delay=rand()%6;
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
		operations = (rand()%6)*cycles;
		for (int i = 0; i < operations; ++i)
		{
			b=a+0;
			for (int j = 0; j < operations; ++j)
			{
				c=a+0;
				/*for (int k = 0; k < operations; ++k)
				{
					d=a+0;
					for (int l = 0; l < operations; ++l)
					{
						e=a+0;
						for (int m = 0; m < operations; ++m)
						{
							f=a+0;
							for (int n = 0; n < operations; ++n)
							{
								a=a+0;
							}
						}
					}
				}*/
			}
		}
		now = time(NULL);
		printf("Procces finished: pid =%d, ops = %d, %s \n",getpid(),operations,asctime(localtime(&now)));
	}
	if (pid!=0)
	{
		now = time(NULL);
		printf("Parent finished: pid =%d, %s \n",getpid(),asctime(localtime(&now)));
	}

	return 0;
}
