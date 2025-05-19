#include <stdio.h>
#include<pthread.h>


int main(int argc, char* argv[]) {

	pid_t pid = fork();

	if(pid < 0) {
		perror("fork");	
	
	}	

	if(pid == 0) {
		printf("Jeg er barnprosess og pid er: %d, foreldrepid: %d\n", getpid(), getppid());
	
	}

	else if(pid > 0) {
		printf("Jeg er foreldreprosess og min pid er: %d, barnepid: %d\n", getpid(), pid);
	
	}




	return 0;
}
