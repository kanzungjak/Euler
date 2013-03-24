/* Super inefficient implementation of fibonacci numbers
 * better use dynamic programming next time dumbass!
 * */

#include <stdio.h>
#include <math.h>

int d[2] = {0,1};

int fib(int n) {
		if(n == 0) 
			return 0;
		else if(n == 1)
			return 1;
		else if(n > 1)
			return fib(n-1) + fib(n-2);
}

int main(int argc, char **argv) {	
	int i;
	int max = 4*pow(10,6);
	int tmp;
	int sum = 0;
	for(i = 0; i < 40; i++) {
		tmp = fib(i);
		if(tmp % 2 == 0 && tmp < max) 
			sum += tmp;
	}
	
	printf("even sum: %d\n", sum);


	return 0;
}
