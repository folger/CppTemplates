#pragma once

#include <deque>
#include <stdexcept>

template <typename T, typename CONT = std::deque<T> >
class Stack {
private:
	CONT elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	}

	template <typename T2, typename CONT2>
	Stack<T,CONT>& operator=(Stack<T2,CONT2> const&);
};

template <typename T, typename CONT>
void Stack<T,CONT>::push(T const& elem) {
	elems.push_back(elem);
}

template <typename T, typename CONT>
void Stack<T,CONT>::pop() {
	if ( empty() )
	{
		throw std::out_of_range("Stack<>::pop: empty stack");
	}

	elems.pop_back();
}

template <typename T, typename CONT>
T Stack<T,CONT>::top() const {
	if ( empty() )
	{
		throw std::out_of_range("Stack<>::pop: empty stack");
	}

	return elems.back();
}

template <typename T, typename CONT>
template <typename T2, typename CONT2>
Stack<T,CONT>& Stack<T,CONT>::operator=(Stack<T2,CONT2> const& op2) {
	if ( (void*)this == (void*)&op2 )
		return *this;

	Stack<T2,CONT2> tmp(op2);

	elems.clear();
	while ( !tmp.empty() ) {
		elems.push_front(tmp.top());
		tmp.pop();
	}

	return *this;
}

