#pragma once

#include <stdexcept>

template <typename T, int MAXSIZE = 100>
class Stack {
private:
	T elems[MAXSIZE];
	int numElems;

public:
	Stack();
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return numElems == 0;
	}
	bool full() const {
		return numElems == MAXSIZE;
	}
};

template <typename T, int MAXSIZE>
Stack<T,MAXSIZE>::Stack() : numElems(0) {
}

template <typename T, int MAXSIZE>
void Stack<T,MAXSIZE>::push(T const& elem) {
	if ( full() ) {
		throw std::out_of_range("Stack<>::push(): stack is full");
	}

	elems[numElems++] = elem;
}

template <typename T, int MAXSIZE>
void Stack<T,MAXSIZE>::pop() {
	if ( empty() ) {
		throw std::out_of_range("Stack<>::push(): stack is empty");
	}

	--numElems;
}

template <typename T, int MAXSIZE>
T Stack<T,MAXSIZE>::top() const {
	if ( empty() ) {
		throw std::out_of_range("Stack<>::push(): stack is empty");
	}

	return elems[numElems-1];
}

