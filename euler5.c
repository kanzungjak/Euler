//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>

int main() {

	long found = 0;
	long number = 10;
	long i;
	while(!found) {
		found = 1;
		for(i = 1; i <= 20; i++) {
			if(number % i != 0) {
				found = 0;
			}
		}
		number++;	

	}
	printf("Num1 %ld\n", number - 1);

	return 0;
}

