#include "Stack.h"
#include <iostream>

template<class ItemType>
bool Stack<ItemType>::isEmpty() const{
	std::cout << "isEmpty()";
	return false;
}

template<class ItemType>
bool Stack<ItemType>::push(const ItemType& newEntry) {
	std::cout << "push()";
	return false;
}

template<class ItemType>
bool Stack<ItemType>::pop() {
	std::cout << "pop()";
	return false;
}

template<class ItemType>
ItemType Stack<ItemType>::peek() const {
	std::cout << "peek()";
	return m_var;
}
