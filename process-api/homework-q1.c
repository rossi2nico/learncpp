#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	int x = 1;
	int fc = fork();

	if (fc == 0) {
		printf("child (%d) %d\n", (int) getpid(), x);
		printf("child (%d) %d\n", (int) getpid(), x);
		printf("child (%d) %d\n", (int) getpid(), x);
	}
	else {
		x = 2;
		printf("parent (%d) %d\n", (int) getpid(), x);
		printf("parent (%d) %d\n", (int) getpid(), x);
		printf("parent (%d) %d\n", (int) getpid(), x);
	}
	return 0;
}
