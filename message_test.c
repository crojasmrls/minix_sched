#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#define cycles 100000
#define mult   1000

int main(void)
{
	int a=0;	
	int c=0;
	int b=0;
	int operations;
	//int pp[2];
	//pipe(&pp[0]);
	int pid;
	pid=fork();
	if (pid>0)
	{

		int message=0;
		while(1){
			int n;
			
			operations = cycles;
			for (int i = 0; i < operations; ++i)
			{
				b=a+0;
				for (int j = 0; j < mult*2; ++j)
				{
					c=a+0;
				}
			}
			if (1)
			{
				//n=read(pp[0], &message, sizeof(message));
				message=message +1;
				printf("Counter: %d\n", message);
			}
		}
	}else if (pid==0){
		while (1){
			int n;
			int message=0;
			operations = cycles;
			//close(pp[0]);
			printf("Ingrese un mensaje:\n");
			scanf ("%d",&message);
			printf("Mensaje ingresado: %d\n", message);
			//n=write(pp[1], &message, sizeof(message));
			for (int i = 0; i < operations; ++i)
			{
				b=a+0;
				for (int j = 0; j < mult; ++j)
				{
					c=a+0;
				}
			}
		}

	}else{
		printf("ERROR at fork\n");
	}
	return 0;
}