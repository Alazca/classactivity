#ifndef ACTIVITY_HPP_
#define ACTIVITY_HPP_

#include <iostream>

template <class T>
class linkedlist {
private:
  struct Node {
    T data;
    Node* next;
  };

  Node* head;
  int size;
  int max_size;

public:
  linkedlist();
  ~linkedlist();
  bool isEmpty() const;
  bool isFull() const;
  int testMax(const int&);  // added to test functionality of is full
  int listSize() const;
  int maxListsize() const;
  void print() const;
  bool isItemAtEqual(int, T) const;
  void insertAt(int, T);
  void insertEnd(T);
  void removeAt(int);
  int retrieveAt(int);
  void replaceAt(int, T);
  void clearList();
  linkedlist& operator=(const linkedlist&);
};

// 1 constant amount of operations
template <class T>
void linkedlist<T>::replaceAt(int index, T element) {
  Node* nodePtr = nullptr;
  if (index < 0 || index > size) {
    throw std::out_of_range(
        "invalid retrieval: index or out of range parameters!");
  }
  nodePtr = head;
  while (nodePtr->next != nullptr) {
    nodePtr = nodePtr->next;
  }
  if (nodePtr) {
    nodePtr->data = element;
  }
}

// 2 constant operations times 2
//
// 3 switch number operations proportional to n
//
// 4 half the number of operations
//
// 5 formulate functions as function of n

#endif
