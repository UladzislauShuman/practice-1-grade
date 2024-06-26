#include <iostream>
#include <vector>
#include "MyList.h"
#include "MyStack.h"

int main()
{
	//проверки MyList
	/*
	{
		MyList myList({ 1,2,3,4,5 });
		myList.print();
		std::cout << myList.pop_back() << std::endl;
		myList.print();
		std::cout << myList.getSize() << std::endl;
		myList.push_back(5);
		myList.print();
		std::cout << myList.getSize() << std::endl;
		std::cout << myList.pop_front() << std::endl;
		myList.print();
		std::cout << myList.getSize() << std::endl;
		myList.push_front(1);
		myList.print();
		std::cout << myList.getSize() << std::endl;
		myList.insert(3, 2);
		myList.print();
		std::cout << myList.getSize() << std::endl;
		myList.remove(3);
		myList.print();
		std::cout << myList.getSize() << std::endl;
		std::cout << std::endl;
	}
	*/
	{
		MyStack myStack({ 5,4,3,2,1 });
		myStack.print();
		std::cout << myStack.pop() << std::endl;
		myStack.print();
		myStack.push(5);
		myStack.print();
	}
	return 0;
}