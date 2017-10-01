#include <stdio.h>

class stack
{
private:
	char* foundation	;
	int top		;
	int capacity	;

public:
	stack(int initSize)
	{
		top = 0;
		capacity = initSize;
		foundation = new char[capacity];
	}

	~stack()
	{
		delete[] foundation;
	}

	bool push(char elem)
	{
	if (top < capacity)
		{
		foundation[top++] = elem;
		return true;
		}
	else return false;
	}

	bool pop(char &elem)
	{
	if (top > 0)
		{
		elem = foundation[--top];
		return true;
		}
	else return false;
	}
	
	bool pick(char &elem)
	{
	if (top > 0)
	{
		elem = foundation[top-1];
		return true;
	}
	else return false;
	}

	int size()
	{
		return capacity;
	}

	bool empty()
	{
		if (top == 0)
			return true;
		else return false;
	}

};

int main()
{
	stack s(1000);
	char elem;
	char c;

	scanf("%c\n",&elem);
	s.push(elem);
	while(scanf("%c\n",&elem) != EOF)
	{
		if ((!s.pick(c)) || (c == elem))
			s.push(elem);
		else s.pop(c);
	}

	if (s.empty())
		printf("%s","YES");
	else printf("%s","NO");

}
