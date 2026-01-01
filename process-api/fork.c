#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	printf("hello (PID: %d)\n", (int) getpid());
	
	int rc = fork();
	if (rc < 0) {
		printf("fork failed\n");
	} 
	else if (rc == 0) {
		printf("child (PID: %d)\n", (int) getpid());
	}
	else {
		int rc_wait = wait(NULL);
		printf("parent of %d (rc_wait: %d) (PID: %d)\n", rc, rc_wait, (int) getpid());
	}

	return 0;
}
