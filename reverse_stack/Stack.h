#ifndef _Stack_h
#define _Stack_h
#include "Node.h"

template <class TYPE>
class Stack { 
   private:
      Stack(const Stack &);
      Node<TYPE> *top;
      int length = 0;

//--------------------------------------------------------------
   public:
       Stack();
       ~Stack();
       TYPE push(const TYPE&);
       TYPE pop( );
       const TYPE& peek( );
       bool isEmpty();
       bool isSizeOne();
       void reverseStack();
       void towerOfHanol(int,Stack <TYPE>&, Stack <TYPE>&, Stack <TYPE>&);
};
    
#endif 
