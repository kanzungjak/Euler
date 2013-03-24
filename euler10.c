#include <stdio.h>
#include <math.h>


int main(int argc, char **argv) {	
	long N = 2000000;
	char *bitmap = (char*)malloc(N * sizeof(char));
	long i,j;
	for(i = 0; i < N; i++) {
		bitmap[i] = '0';
	}
	
	for(i = 2; i < N; i++) {
		if( bitmap[i] == '0') {
				for(j = i*i; j < N; j+=i) {
						bitmap[j] = '1';
				}
		}
	}
	
	/*
	for(i = 0; i < 1000; i++) {
			printf("%c ", bitmap[i]);
	}
*/

	return 0;
}
