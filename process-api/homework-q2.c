#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() { 
	char data[50];
	FILE* fptr = fopen("prophecy.txt", "r");
	
	if (fptr == NULL) {
		printf("error opening file");
		return 1;
	}
	
	int rc = fork();
	if (rc == 0) {
		//printf("child pid: %d\n", (int) getpid());
		
		while (fgets(data, 50, fptr)) {
			printf("child (%d) %s", (int) getpid(), data);
		}
	}	
	else {
		// int rc_wait = wait(NULL);
		// printf("parent pid: %d wait: %d\n", (int) getpid(), rc_wait);
		
		while (fgets(data, 50, fptr)) {
			printf("parent (%d) %s", (int) getpid(), data);
		}
	}

	return 0;
}
