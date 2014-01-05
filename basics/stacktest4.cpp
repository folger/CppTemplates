#include <string>
#include <iostream>
#include "stack4.h"

int main()
{
	try	{
		Stack<int,20> int20Stack;
		Stack<int,40> int40Stack;
		Stack<std::string,40> stringStack; // stack of up to 40 strings

		// manipulate stack of up to 20 ints
		int20Stack.push(7);
		std::cout << int20Stack.top() << std::endl;
		int20Stack.pop();

		// manipulate stack of up to 40 strings
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