#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define cycles 100000
#define mult   1000

int main(int argc, char const *argv[])
{
	int a=0;	
	int c=0;
	int b=0;
	int operations;
	while(1){
		operations = cycles;
		for (int i = 0; i < operations; ++i)
		{
			b=a+0;
			for (int j = 0; j < mult; ++j)
			{
				c=a+0;
			}
		}
		if (1)
		{
			printf("Hello from program 1\n");
		}
	}
	return 0;
}