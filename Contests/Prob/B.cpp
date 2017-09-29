#include <stdio.h>
//#include "stdafx.h"
long sigma(long a,long b){
	return a + b;
}

int main()
{
	long summ = 0;
	long a = 0;

	while	(scanf("%ld",&a) != EOF )
		summ = a + summ;
	printf("%ld",summ);
}
