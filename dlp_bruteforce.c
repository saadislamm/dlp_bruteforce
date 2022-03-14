// Brute forces DLP
// Saad Islam

#include <stdio.h>

unsigned long int power(unsigned int a, unsigned long int i, unsigned long int p) {
	unsigned long int result = a;
	for (int j=0; j < i-1; j++) {
		result = (result * a) % p;
	}
	return result;
}

void main()
{
	unsigned int a = 2;
	unsigned long int B = 424242;
	unsigned long int p = 5041259;
	unsigned long int result;		// Solution = 5142

	for (int i=0; i<p-1; i++) {
	//printf("%d\n", i+1);
		result = power(a, (i+1), p);
		if (result == B) {
			printf("%d\n", i+1);
			break;
		}
	}
}
