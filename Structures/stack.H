
class stack
{
private:
	int* foundation	;
	int top		;
	int capacity	;

public:
	stack(int initSize)
	{
		top = 0;
		capacity = initSize;
		foundation = new int[capacity];
	}

	~stack()
	{
		delete[] foundation;
	}

	bool push(int elem)
	{
	if (top < capacity)
		{
		foundation[top++] = elem;
		return true;
		}
	else return false;
	}

	bool pop(int &elem)
	{
	if (top > 0)
		{
		elem = foundation[--top];
		return true;
		}
	else return false;
	}
	
	bool pick(int &elem)
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


