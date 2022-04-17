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
    void print() const;
    ~Stack() override;
private:
    int m_size = 0;
    int m_capacity = DEFAULT_SIZE;
    ItemType * m_stack = nullptr;
};

/////////////////////////////////////////////////////////////////////////

template<class ItemType>
Stack<ItemType>::Stack() 
{
    std::cout << "Stack()\n";
    m_stack = new ItemType[m_capacity];
    std::cout << std::endl;
}

template<class ItemType>
Stack<ItemType>::~Stack() 
{
    delete[] m_stack;
}

template<class ItemType>
bool Stack<ItemType>::isEmpty() const 
{
    std::cout << "isEmpty()\n\n";
    if (m_size == 0) 
    {
        return false;
    }
    else
    {
        return true;
    }
}

template<class ItemType>
bool Stack<ItemType>::push(const ItemType& newEntry) 
{
    if (m_size == m_capacity) 
    {
        std::cout << "max push(" << newEntry << "):\n";
        m_capacity *= 2;
        std::cout << "m_capacity: " << m_capacity << std::endl;
        ItemType* to_delete = m_stack;
        ItemType* temp_stack = new ItemType[m_capacity];
        
        for (int i = 0; i < m_size; i++)
        {
            temp_stack[i] = m_stack[i];
        }

        temp_stack[m_size] = newEntry;
        m_stack = temp_stack;
        delete [] to_delete;
        m_size++;
        return true;
    }
    else
    {
        std::cout << "normal push(" << newEntry << "):\n";
        m_stack[m_size] = newEntry;
        m_size++;
        return true;
    }
}

template<class ItemType>
bool Stack<ItemType>::pop()
{
    std::cout << "pop()\n\n";
    if (m_size == 0) 
    { 
        return false; 
    }

    m_size--;
    return true;
}

template<class ItemType>
ItemType Stack<ItemType>::peek() const
{
    std::cout << "peek()\n";
    return m_stack[m_size - 1];
}

template<class ItemType>
void Stack<ItemType>::print() const
{
    std::cout << "print()\n";
    for (int i = 0; i < m_size; i++) 
    {
        std::cout << m_stack[i] << std::endl;
    }
    std::cout << std::endl;
}


#endif

