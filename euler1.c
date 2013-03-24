/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

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
