#include <stdio.h>
//#include "stdafx.h"
#include <string>
#include <stdlib.h>
int main()
{
	char Ch;
	long summ = 0;
	std::string s;
	while (Ch!="\n"){
		while (Ch!=" "){
			scanf("%s",Ch);
			s = s + ch;
		}
		summ = std::atoi(s)+summ;
	};
}
