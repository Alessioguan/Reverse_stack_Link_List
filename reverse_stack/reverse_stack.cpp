#include <iostream>
#include <conio.h>
#include "Stack.cpp"

using namespace std;

int main()
{
    Stack<int> The_Stack;
    cout << "The stack before reverse is : " << endl;
    for (int i = 0; i < 10; i++) {
        int data = The_Stack.push(i);
        cout << data << endl;
    }
    cout << "The stack after reverse is : " << endl;
    The_Stack.reverseStack();


    return 0;
}

