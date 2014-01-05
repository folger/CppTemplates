#include <iostream>
#include "stack6.h"

int main() {
	Stack<int> intStack;
	intStack.push(10);
	intStack.push(20);

	Stack<double> doubleStack;
	doubleStack = intStack;

	std::cout << doubleStack.top() << std::endl;
	doubleStack.pop();
	std::cout << doubleStack.top() << std::endl;

	return 0;
}