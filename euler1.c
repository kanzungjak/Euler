#include <stdio.h>

int main(int argc, char **argv) {
	int i;
	int sum = 0;
	int max = 1000;
	
	for(i = 1; i < max; i++) {
		if(3*i < max) {
			sum += 3*i;   
			printf("%d ", 3*i);
		}	
	
	}
	puts("");
	for(i = 1; i < max; i++) {
		if(5*i < max) {
			sum += 5*i;
			printf("%d ", 5*i);
		}		
	}
	
	for(i = 0; i < max; i++ ) {
		if(15*i < max) {
			sum -= 15*i;
		}	
	}

	
	printf("Sum: %d\n", sum);


	return 0;
}
