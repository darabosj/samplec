#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
/* info  */
void info(){
	char *uname;
	uname = getlogin();
	if (!uname){
	printf("uname error! %i \n ",errno);
	} else{
	printf("Login name :%s\n",getlogin());}
	printf("Pid : %i \n",getpid());

}

int main(int argc, char **argv) {
	int i;
	char nev[30];
	pid_t p;
	
	info();
	if (argc<2){
	printf("Invalid parameter! \n");
	return 1;
	}
	strncpy(nev,argv[1],sizeof(nev));
	printf("Hello %s !!!! \n",nev);
	return 0;
}
