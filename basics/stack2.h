#pragma once

#include <deque>
#include <string>
#include <iostream>
#include "stack3.h"

template <>
class Stack<std::string> {
private:
	std::deque<std::string> elems;

public:
	void push(std::string const&);
	void pop();
	std::string top() const;
	bool empty() const {
		return elems.empty();
	}
};

void Stack<std::string>::push(std::string const& elem) {
	std::cout << "Stack<std::string>::push" << std::endl;
	elems.push_back(elem);
}

void Stack<std::string>::pop() {
	if ( empty() )
	{
		throw std::out_of_range("Stack<>::pop: empty stack");
	}

	elems.pop_back();
}

std::string Stack<std::string>::top() const {
	if ( empty() )
	{
		throw std::out_of_range("Stack<>::pop: empty stack");
	}

	return elems.back();
}
