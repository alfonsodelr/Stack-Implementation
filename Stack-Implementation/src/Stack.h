#ifndef STACK_
#define STACK_

#include "StackInterface.h"
#define DEFAULT_SIZE 6

template<class ItemType>
class Stack : public StackInterface <ItemType>
{
public:
	bool isEmpty() const;
    bool push(const ItemType& newEntry);
    bool pop();
    ItemType peek() const;
    virtual ~Stack() {  }
private:
    int m_size = DEFAULT_SIZE;
    ItemType* m_arr = new ItemType(DEFAULT_SIZE);
};



#endif