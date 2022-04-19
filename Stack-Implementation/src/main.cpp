#include <iostream>
#include "Stack.h"
#include <string>

void reverse(Stack<std::string>&);
void split(std::string&, Stack<std::string>&);
std::string remove_space(std::string&);
bool isPalindrome(std::string);
void menu();

int main() 
{
	Stack<std::string> _list;
	std::string str = "";
	bool done = false;
	int input = 0;
	char garbage = ' ';
	
	while (!done)
	{
		menu();
		std::cin >> input;

		if (input == 1)
		{
			std::cout << "\n======================================\n";
			std::cout << "Enter a string: \n";
			garbage = getchar();
			std::getline(std::cin, str);
			split(str, _list);
			reverse(_list);
			std::cout << "\n======================================\n";
		}
		else if (input == 2)
		{
			std::cout << "\n======================================\n";
			std::cout << "Enter a string: \n";
			std::cin >> str;
			std::cout << "boolean value (1 = true || 0 = false): " << isPalindrome(str);
			std::cout << "\n======================================\n";
		}
		else
		{
			done = true;
		}
		std::cout << std::endl;
	}

	return 0;
}

/////////////////////////////////////////////////////////////////////////////

std::string remove_space(std::string &str)
{
	int size = str.size();
	std::string temp = "";

	for (int i = 0; i < size; i++)
	{
		if (str.at(i) == ' ')
		{
			continue;
		}
		else
		{
			temp += str.at(i);
		}
	}

	return temp;
}

bool isPalindrome(std::string str)
{
	std::string s = remove_space(str);
	Stack<char> list;
	Stack<char> reversed_list;
	
	for (int i = 0, j = s.size()-1; i < s.size(); i++, j--)
	{
		list.push(s.at(i));
		reversed_list.push(s.at(j));
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (list.peek() != reversed_list.peek())
		{
			return false;
		}
		else
		{
			list.pop();
			reversed_list.pop();
		}
	}

	return true;
}

void reverse(Stack<std::string>& myStack)
{
	int size = myStack.getSize();

	for (int i = 0; i < size; i++)
	{
		std::cout << myStack.peek() << " ";
		myStack.pop();
	}
}

void split(std::string& str, Stack<std::string>& myStack)
{
	std::string temp = "";
	std::string s = str;
	s += " ";
	int size = s.size();

	for (int i = 0; i < size; i++) {
		if (s.at(i) == ' ')
		{
			myStack.push(temp);
			temp = "";
		}
		else
		{
			temp += s.at(i);
		}
	}
}

void menu()
{
	std::cout << "0. Exit\n1. Reverse String\n2. Check if Palindrome\n\
Enter Here: ";
}