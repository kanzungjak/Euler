#include <stdio.h>
#include <math.h>
#include <stdint.h>
 uintmax_t u ;

long long fac(long long n) {
	if(n == 0)
		return 1;
	else
		return n*fac(n-1);
}

int numDigits(int n) {
	if (n < 10) 
		return 1;
	else
		return 1 + numDigits(n/10);
}

int main(int argc, char **argv) {	
	u = 0;
	u--;
	printf("%j\n", u);
	long long ans = fac(50);
	printf("%lld\n", ans);
	int length = numDigits(ans);
	int i;
	int sum = 0;
	for(i = 0; i < length; i++) {
			sum += ans % 10;
			ans /= 10;
	}
	printf("Sum of digits: %d\n", sum);
	
	
	return 0;
}
