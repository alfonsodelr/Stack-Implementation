#ifndef STACK_
#define STACK_

#include "StackInterface.h"
#include "Stack.h"

template<class ItemType>
class Stack : public StackInterface <ItemType>
{
public:
    bool isEmpty() const;
    bool push(const ItemType& newEntry);
    bool pop();
    ItemType peek() const;
    ~Stack() {}
private:
    ItemType m_var = 0;
};


#endif