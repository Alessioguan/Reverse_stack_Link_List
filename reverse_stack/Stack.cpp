#include <iostream>
#include <assert.h>
//assert checks if its argument (which must have scalar type) compares equal to zero. If it does, assert outputs implementation-specific diagnostic information on the standard error output and calls
#include "Stack.h"

using namespace std;

//Constructor
template <class TYPE>
Stack<TYPE>::Stack() {
	top = NULL;
}

//Destructor
template <class TYPE>
Stack<TYPE>::~Stack(){
	Node<TYPE>* nextNode;//指向下一节点的指针

	// Traverse the list deletign each node
	while (top != NULL)
	{
		nextNode = top->next;
		delete top;
		top = nextNode;
	}
}

//Put item on top of stack
template <class TYPE>
TYPE Stack<TYPE>::push(const TYPE& e) {
	top = new Node<TYPE>(e, top);
	length++;
	return top->value;
}

//Take item from top of stack
template <class TYPE>
TYPE Stack<TYPE>::pop() {

	// First make sure the stack isn't empty.
	assert(!isEmpty());
	TYPE data = top->value;
	top = top->next;
	length--;
	return data;
}

//Peek at top of stack
template <class TYPE>
const TYPE& Stack<TYPE>::peek() {
	assert(!isEmpty());
	return top->value;
}

//True is stack is empty
template <class TYPE>
bool Stack<TYPE>::isEmpty() {
	return(top == NULL);
}


//reverse the Stack
template <class TYPE>
void Stack<TYPE>::reverseStack() {
	Stack<TYPE> tempStack1;
	Stack<TYPE> tempStack2;

	towerOfHanol(length,*this, tempStack1, tempStack2);
	// Push all elements from the original stack to the temporary stack
	while (!tempStack1.isEmpty()) {
		int data = push(tempStack1.pop());
		cout << data << endl;
	}

}
//Algorithm tower of hanol
template <class TYPE>
void Stack<TYPE>::towerOfHanol(int n,Stack<TYPE>& from, Stack<TYPE>& to, Stack<TYPE>& median) {
	if (n == 1) {
		to.push(from.pop());
	}
	else {
	towerOfHanol(n - 1,from, median, to);
	to.push(from.pop());
	towerOfHanol(n - 1,median, to, from);
	}
}

