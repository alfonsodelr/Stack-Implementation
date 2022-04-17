#include <iostream>
#include "Stack.h"
#include <string>

int main() 
{

	Stack<std::string> _list;

	_list.push("this");
	_list.push("is");
	_list.push("fun");
	_list.print();
	_list.pop();
	std::cout << _list.peek() << std::endl << std::endl;
	_list.print();

	return 0;

}