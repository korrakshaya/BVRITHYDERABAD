//FIFO server side:
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define FIFO_FILE "fifo_twoway.txt"

void reverse_string(char *);
int main() {
	int fd;
	char readbuf[80];
	char end[10];
	int to_end;
	int read_bytes;

	
	mkfifo(FIFO_FILE, S_IFIFO|0640); 
	strcpy(end, "end");

	fd = open(FIFO_FILE, O_RDWR);

	while (1) {
		read_bytes = read(fd, readbuf, sizeof(readbuf));
		readbuf[read_bytes] = '\0';
		printf("FIFOSERVER: Received string: \"%s\" and length is %d\n", readbuf, (int)(strlen(readbuf)));
		to_end = strcmp(readbuf, end);

		if (to_end == 0) {
			close(fd);
			break;
		}
		reverse_string(readbuf);
		printf("FIFOSERVER: Sending Reversed String: \"%s\" and length is %d\n", readbuf, (int)strlen(readbuf));

		write(fd, readbuf, strlen(readbuf));

		

		sleep(2);
	}
	return 0;
}

void reverse_string(char * str) {
	int last, limit, first;
	char temp;
	last = strlen(str) - 1;
	first = 0;
	limit = last/2;

	while (first < last) {
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		first++;
		last--;
	}
	return;
}
