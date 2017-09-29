#include <stdio.h>
#include "stack.H"
int main(){

	stack s(100);
	int q = 10;
	for(int i = 0; i<10;i++)
		s.push(i*i);
	while(!s.empty()){
	s.pop(--q);
	printf("%d\n",q);
	}
}
