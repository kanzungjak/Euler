/*
 * A Pythagorean triplet is a set of three natural numbers, a b c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
* 
* Euklid's formula:
* a = k*(m^2 - n^2)
* b = k*(2mn)
* c = k*(m^2 + n^2)
* 
* 
* sqrt(1000) ~≃ 32
* */

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {	
	int a, b, c;
	int m, n;
	
	for(n = 1; n < 32; n++) {
		for(m = n + 1; m < 32; m++) {
			a = pow(m,2) - pow(n, 2);
			b = 2*m*n;
			c = pow(m,2) + pow(n, 2);
			if( 1000 == (a + b + c) ) {
				printf("a:%d b:%d, c:%d abc:%d\n", a, b ,c, a*b*c);
				return 0;
			}
		}
	}

	return 0;
}


