#ifndef QUEUE_HH
#define QUEUE_HH

#include "list.hh"

/* Klasa implementuj±ca kolejkê. */

template <class T> class Queue {

private:
  List<T> *queue;
public:
  void enque (T element);
  T dequeue ();
  int size ();
  Queue();
  ~Queue();
};

template <class T> Queue<T>::Queue () {
  stack = new List<T> ();
}

template <class T> Queue<T>::~Queue () {
  delete stack;
}

template <class T> voi dQueue<T>::enqueue (T element) {
  queue->add(element, 1);
}
template <class T> T Queue<T>::dequeue () {
  if (stack->size()>0 {
      T dequeuedElement;
      dequeuedElement = queue->get(1);
      queue->remove(queue->1);
      return dequeuedElement;
    }
    }

  template <class T> int Queue<T>::size () {
    return queue.size();
  }
#endif
