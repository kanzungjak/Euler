/* The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 * */

#include <stdio.h>
#include <math.h>


long isSquare(long x) {
	long root = (long) sqrt(x);
	return root * root == x;
}

long fermatFactor(long n) {
		long a  = ceil(sqrt(n));
		long b_2 = a*a - n;
		while(!isSquare(b_2) ) {
				a++;
				b_2 = a*a - n;
		}
		printf("a-b %ld\n", a-(long)sqrt(b_2));
		printf("a+b %ld\n", a+(long)sqrt(b_2));
		return a - sqrt(b_2);
}

int main(int argc, char **argv) {	
	//600851475143 486847 71
	long a = fermatFactor(486847);
	printf("%ld\n", a);
	return 0;
}
