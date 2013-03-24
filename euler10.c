//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.

#include <stdio.h>
#include <math.h>

long isPrime(long n) {
		if(n == 2) 
			return 1;
		if(n % 2 == 0 || n == 1) {
			return 0;
		}
		long sq = sqrt(n) + 1;
		long i;
		for(i = 3; i < sq; i++) {
			if(n % i == 0) {
				return 0;
			}
		}
		return 1;
}	

int main(int argc, char **argv) {	
	long N = 2000000;
	long i;
	
	double sum = 2; //bei int gabs nen Überlauf ...
	for(i = 3; i < N; i += 2) {
		if(isPrime(i)) {
			sum += i;
		}
	}
	printf("sum %f\n", sum);

	return 0;
}
