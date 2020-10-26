#include "Node.h"

template< typename T >
Node<T>::Node()
{
	this->value = T();
	this->next = nullptr;
}

template< typename T >
Node<T>::Node(T value)
{
	this->value = value;
	this->next = nullptr;
}

template< typename T >
Node<T>::Node(T value, Node* next)
{
	this->value = value;
	this->next = next;
}