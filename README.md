# Reverse Stack using Tower of Hanoi Algorithm

This C++ program demonstrates the reversal of a stack using the Tower of Hanoi algorithm. The stack implementation is done using a linked list-based Stack class.

## Description

The program consists of the following files:

- `Node.h`: Header file containing the definition of the Node class.
- `Stack.h`: Header file containing the definition of the Stack class.
- `Stack.cpp`: Source file containing the implementation of the Stack class methods.
- `main.cpp`: Source file containing the main function to test the Stack class and reverse the stack.

### Node Class

The `Node` class represents a single node in the linked list used to implement the stack. It contains two data members: `value` to store the value of the node, and `next` to store a pointer to the next node in the list.

### Stack Class

The `Stack` class implements a stack using a linked list. It contains methods to push, pop, peek, and check if the stack is empty. Additionally, it includes a method to reverse the stack using the Tower of Hanoi algorithm.

### Tower of Hanoi Algorithm

The `towerOfHanol` method in the `Stack` class implements the Tower of Hanoi algorithm recursively. It takes four arguments: the number of disks (`n`), and three stacks representing the source, destination, and auxiliary stacks. The algorithm moves the disks from the source stack to the destination stack using the auxiliary stack as a temporary storage.

## Usage

To run the program:

1. Compile the source files using a C++ compiler (e.g., g++).
2. Execute the compiled executable.

Upon execution, the program will create a stack, push integers from 0 to 9 onto the stack, print the stack before reversal, reverse the stack using the Tower of Hanoi algorithm, and then print the reversed stack.

## Sample Output

# reverse_stack

![image](https://github.com/Alessioguan/Reverse_stack_Link_List/assets/141177256/b125edad-3920-4c8b-a763-29382a716d2f)
