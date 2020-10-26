#pragma once
template<typename T>
class Node
{
private:
	T value;
	Node<T>* next;
public:
	Node();
	Node(T);
	Node(T, Node*);
};

