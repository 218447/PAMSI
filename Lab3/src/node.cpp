#include "node.hh"

template <class T> T Node::getElement() {
  return value;
}
template <class T> T Node::getNext() {
  return next;
}
template <class T> T Node::setElement(T element) {
  value=element;
}
template <class T> T Node::setNext(Node<T> element) {
  next=element;
}
template <class T> T Node::Node() {
  T=0;
  next=NULL;
}
template <class T> T Node::Node(T element) {
  value=element;
}
