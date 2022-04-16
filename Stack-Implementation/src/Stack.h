#ifndef STACK_
#define STACK_

#define DEFAULT_SIZE 6
#include "StackInterface.h"
#include "Stack.h"

template<class ItemType>
class Stack : public StackInterface <ItemType>
{
public:
    Stack();
    bool isEmpty() const;
    bool push(const ItemType& newEntry);
    bool pop();
    ItemType peek() const;
    ~Stack() {}
private:
    int size = DEFAULT_SIZE;
    ItemType * m_stack = nullptr;
};

template<class ItemType>
Stack<ItemType>::Stack() 
{
    m_stack = new ItemType(size);
}

template<class ItemType>
bool Stack<ItemType>::isEmpty() const 
{
    std::cout << "isEmpty()";
    return false;
}

template<class ItemType>
bool Stack<ItemType>::push(const ItemType& newEntry) 
{
    std::cout << "push(): " << newEntry;
    return false;
}

template<class ItemType>
bool Stack<ItemType>::pop()
{
    std::cout << "pop()";
    return false;
}

template<class ItemType>
ItemType Stack<ItemType>::peek() const
{
    std::cout << "peek()";
    return m_var;
}

#endif

