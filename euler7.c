/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
		if(n == 2) 
			return 1;
		if(n % 2 == 0 || n == 1) {
			return 0;
		}
		int sq = sqrt(n) + 1;
		int i;
		for(i = 3; i < sq; i++) {
			if(n % i == 0) {
				return 0;
			}
		}
		return 1;
}	

int main(int argc, char **argv) {	
	int i = 2;
	int counter = 0;
	int ans;
	while (counter < 10001) {
			if (isPrime(i)) {
					counter++;
					ans = i;
			}
			i++;
	}
	printf("%d prime %d ",counter ,ans);
	
	return 0;
}
