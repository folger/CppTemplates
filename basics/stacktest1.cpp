#include <string>
#include <iostream>
#include "stack2.h"

int main()
{
	try	{
		Stack<int> intStack;
		Stack<std::string> stringStack;

		intStack.push(100);
		std::cout << intStack.top() << std::endl;

		stringStack.push("hello");
		std::cout << stringStack.top() << std::endl;
		stringStack.pop();
		stringStack.pop();

		return 0;
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
		return 1;
	}
}