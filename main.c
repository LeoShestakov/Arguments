#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line ){
	char * argument = line;
	char ** arr = malloc(5 * sizeof(argument));
	int i = 0;
	while (argument != NULL){
		arr[i] = strsep(&argument, " ");
		i++;
	}
	return arr;
}

int main() {
	char test[100] = "ls -a -l";
	printf("Line: %s\n", test);
	char ** separated = parse_args(test);
	printf("Parsed, Command executed");
	execvp(separated[0], separated);
	return 0;
}