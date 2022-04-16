#include <iostream>
#include "Stack.h"

class name {
public:
	name() {
		std::cout << "called";
	}
	void print_nice() {
		std::cout << "nice";
	}
};

int main() {

	Stack <int> my_stack;

	my_stack.isEmpty();
	
	return 0;

}