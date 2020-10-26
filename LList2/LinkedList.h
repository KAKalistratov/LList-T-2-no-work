#pragma once
#include "Node.h"
template < typename T>
class LinkedList
{
private:
	friend Node<T>;
	Node<T>* head;
public:
	LinkedList();

	LinkedList(Node<T>*);

	Node<T>* getHead();

	void Print();

	void add(T);
};

