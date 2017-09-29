
#include <stdio.h>

long sigma(long a, long b) {
	return(a + b);
}

int main()
{
	long a;
	long b;
    scanf("%ld",&a);
	scanf("%ld",&b);
	printf("%ld\n",sigma(a, b));
}
