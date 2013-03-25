/*The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

int sqNumbers(int n) {
	return (n*(n+1)*(2*n+1))/6;
}

int eulerSum(int n) {
	return n*(n+1)/2;
}

int main(int argc, char **argv) {	
	printf("%d\n", sqNumbers(10));
	int diff = sqNumbers(100) - pow(eulerSum(100), 2) ;
	printf("%d \n", abs(diff) );
	
	return 0;
}
