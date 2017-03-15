#include <iostream>
#include <cassert>
#include "stack.h"

using namespace std;

	// start empty
	Stack::Stack() {
		top = NULL;
	}

	// delete the stack
	Stack::~Stack() {
		while (top != NULL) {
			pop();
		}
	}

	// push something new on top
	void Stack::push(double new_data) {
		Node* newTop = new Node;
		newTop->data = new_data;
		newTop->underneath = top;
		top = newTop;
	}

	// pop something off
	double Stack::pop() {
		double retValue = top->data;
		Node* temp = top;
		top = top->underneath;
		delete temp;
		return retValue;
	}

	// return whether or not we're empty
	bool Stack::empty() const {
		return top == NULL;
	}



