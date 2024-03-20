#ifndef _Node_h
//检查宏 _Node_h 是否已经被定义。如果未定义，则继续执行后续代码。这个宏用于防止头文件被多次包含。
#define _Node_h
//#define _Node_h: 这是预处理器指令，定义宏 _Node_h。它用于标记头文件的开始位置，防止重复包含。

template <class TYPE> class Stack;
template <class TYPE>
class Node {
	friend class Stack<TYPE>;
	//友元声明，允许 Stack 类访问 Node 类的私有成员。这里的 TYPE 是 Stack 类模板的类型参数。
    TYPE value;
    Node<TYPE>* next;
    Node(const  TYPE& t, Node* n = NULL) {
        //default n = NULL
        value = t;
        next = n;
    }
};

#endif 
