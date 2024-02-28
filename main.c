#include "shell.h"
#include <errno.h>

int main(void)
{
	char *buf;
	size_t n;
	int id;
	int size;
	int errno;

	while (1)
	{
	write(1, "5DAMAK$ ", 8);
	if (getline(&buf, &n, stdin) == -1)
	{
		return (1);
	}

	  size = _strlen(buf);

	*(buf + (size)) = '\0';
	id = fork();
	if (id == 0)
	{
		const char *cbuf = buf;
		char *arr [] = {buf,  NULL};

		execv(cbuf, arr);
		perror("./shell");

	}

	wait(NULL);

	}
	return (0);
	}
