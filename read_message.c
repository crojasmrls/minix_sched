#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define cycles 100000
#define mult   10000

int main(int argc, char const *argv[])
{
	char message [80];
	while(1){
		printf("Ingrese un mensaje:\n");
		scanf ("%79s",message);  
	 	printf ("El mensaje es: %s\n", message);
	}
	return 0;
}