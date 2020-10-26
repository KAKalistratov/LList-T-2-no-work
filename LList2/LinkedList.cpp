#include <iostream>
#include "LinkedList.h"

using namespace std;

template < typename T >
LinkedList<T>::LinkedList()
{
	head = nullptr;
}

template < typename T >
LinkedList<T>::LinkedList(Node<T>* head)
{
	this->head = head;
}

template < typename T >
Node<T>* LinkedList<T>::getHead()
{
	return head;
}

template < typename T >
void LinkedList<T>::Print()
{
	Node<T>* current = head;
	while (current != nullptr)
	{
		cout << current->value;
		if (current->next != nullptr)
		{
			cout << ", ";
		}
		current = current->next;
	}
}

template < typename T >
void LinkedList<T>::add(T new_value)
{
	if (head == nullptr)
	{
		head = new Node<T>(new_value);
	}
	else
	{
		Node<T>* current = this->head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		current->next = new Node<T>(new_value);
	}
}