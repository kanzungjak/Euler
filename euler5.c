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
