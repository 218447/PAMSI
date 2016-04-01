#ifndef NODE_HH
#define NODE_HH

template <class T>
class Node {

private:
  T  value;
  Node<T> *next;
  friend class List;
  
public:
  T getElement();
  Node<T> getNext();
  void setElement(T element);
  void setNext (Node<T> element);
  Node();
  ~Node();
};

#endif
