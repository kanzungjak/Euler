

#include <stdio.h>
#include <math.h>


int isPalindrome(int n) {
	char b[7];
	sprintf(b,"%d", n);
			if(b[0] == b[5] && b[1] == b[4] && 
			   b[2] == b[3])
				return 1;
			else 
				return 0;
}

int main(int argc, char **argv) {	
	int max = 0;
	int i, j;
	int pd;
	for(i = 100; i < 1000; i++) {
			for(j = 100; j < 1000; j++) {
					pd = i*j;
					if (isPalindrome(pd) ) {
						if(pd > max)
							max = pd;
							break;
					}	
			}
	}
	printf("Biggest palindrome %d\n", max);

	return 0;
}
