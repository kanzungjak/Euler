#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	
	FILE *file = fopen("cipher1.txt", "r");
	if(file == NULL)
		printf("Fehler 37 \n");
	char str[1000];
	if( fgets(str, 1000, file) != NULL )
		puts(str);
	
	char *tokStr;
	tokStr = strtok(str," ,");
	while(tokStr != NULL) {
			printf("%s\n", tokStr);
			tokStr = strtok(NULL, " ,");
	}
	fclose(file);
	return 0;
}
