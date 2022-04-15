#ifndef STACK_
#define STACK_

#include "src/StackInterface.h"
#define DEFAULT_SIZE 6

template<class ItemType>
class Stack : public StackInterface 
{
public:
	bool isEmpty();
    bool push(const ItemType& newEntry);
    bool pop();
    ItemType peek() const;
    virtual ~Stack() { std::cout << "Destructing derived\n"; }
private:
    int m_size = DEFAULT_SIZE;
    ItemType* arr = new ItemType(DEFAULT_SIZE);
};



#endif