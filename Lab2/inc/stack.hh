#ifndef STACK_HH
#define STACK_HH

#include "list.hh"

/* Klasa implementuj±ca stos. */

template <class T> class Stack {

private:
  List <T> *stack;
  
public:
  void push (T element);
  T pop ();
  int size ();
  Stack();
  ~Stack();
};

template <class T> void Stack<T>::push (T element) {
  stack->add(element, stack->size());
}

template <class T> T Stack<T>::pop () {
  if (stack->size()>0) {
    T poppedElement;
    poppedElement = stack->get(stack->size-1);
    stack->remove(stack->size-1);
    return poppedElement;
  }
}

template <class T> int Stack<T>::size () {
  return stack->size();
}

template <class T> Stack<T>::Stack () {
  stack = new List<T> ();
}

template <class T> Stack<T>::~Stack () {
  delete stack;
}
  



#endif
