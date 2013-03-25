/*
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 21000?
* */

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {	

	long double num = pow(2,1000);
	int length = floor(log(num)/log(10)) + 1;
	int i;
	long long int sum = 0;
	for(i = 0; i < length; ++i) {
		sum += (int)num % 10;
		num /= 10;
	}
	printf("%lld\n", sum);
	return 0;
}


