#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv) {
	int i;
	char nev[30];
	pid_t p;

	printf("Pid : %i ",getpid());

	if (argc<2){
	printf("Invalid parameter! \n");
	return 1;
	}
	strncpy(nev,argv[1],sizeof(nev));
	printf("Hello %s !!!! \n",nev);
	return 0;
}
