#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	int i;
	char nev[30];

	if (argc<2){
	printf("Invalid parameter! \n");
	return 1;
	}
	strncpy(nev,argv[1],sizeof(nev));
	printf("Hello %s !!!! \n",nev);
	return 0;
}
