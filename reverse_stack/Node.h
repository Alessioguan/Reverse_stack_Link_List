#ifndef _Node_h
//���� _Node_h �Ƿ��Ѿ������塣���δ���壬�����ִ�к������롣��������ڷ�ֹͷ�ļ�����ΰ�����
#define _Node_h
//#define _Node_h: ����Ԥ������ָ������ _Node_h�������ڱ��ͷ�ļ��Ŀ�ʼλ�ã���ֹ�ظ�������

template <class TYPE> class Stack;
template <class TYPE>
class Node {
	friend class Stack<TYPE>;
	//��Ԫ���������� Stack ����� Node ���˽�г�Ա������� TYPE �� Stack ��ģ������Ͳ�����
    TYPE value;
    Node<TYPE>* next;
    Node(const  TYPE& t, Node* n = NULL) {
        //default n = NULL
        value = t;
        next = n;
    }
};

#endif 
