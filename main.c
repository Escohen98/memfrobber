#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "memfrobber.h"

int main(int argc, char ** argv) {
	time_t now;
	time(&now);
	char str[100] = "Hello world on this beautiful ";
	strcat(str, ctime(&now));
	memfrobber(str);
	printf("%s", str);
	return EXIT_SUCCESS;
}
