#include "MyStack.h"
#include <stdio.h>

int main()
{
	Stack<int> s;

	s.push(100);

	printf("%d\n", s.top());

	s.pop();

	printf("%d\n", s.empty());
	return 0;
}