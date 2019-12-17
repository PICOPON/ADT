#include "pch.h"
#include "queue.h"


queue::queue()
{
	count = 0;
	first = nullptr;
}

queue::queue(std::initializer_list<const char*> inputArray)
{
	first = nullptr;
	for (auto member : inputArray) {
		queue::addToListQueue(std::string(member));
	}
}

queue::queue(std::string inial_list[],int len)
{
	first = nullptr;
	for (int i = 0; i < len; i++) {
		queue::addToListQueue(inial_list[i]);
	}
}


queue::~queue()
{
	for (auto ptr = first; ptr != nullptr; ) {
		Node* temp = ptr;
		ptr = ptr->next;
		delete temp;
	}
	std::cout << "deconstructed";
}

void queue::addToQueue(std::string n)
{
	name[count] = n;
	count++;
}

void queue::addToListQueue(std::string name)
{
	for (auto ptr = first; ptr != nullptr; ptr = ptr->next) {
		if (ptr->next == nullptr) {
			ptr->next = new Node;
			ptr->next->info = name;
			ptr->next->next = nullptr;
			break;
		}
	}
	if (first == nullptr) {
		first = new Node; first->info = name; first->next = nullptr;
	}
}

void queue::pop()
{
	for (auto i = 0; i < count-1; i++) {
		name[i] = name[i + 1];
	}
	name[count - 1] = "\0";
}

void queue::popFromList()
{
	Node* ptr = first;
	first = first->next;
	delete ptr;
}

void queue::showList() const
{
	for (auto ptr = first; ptr != nullptr; ptr = ptr->next) {
		std::cout << ptr->info << std::endl;
	}
}

void queue::show() const
{
	for (auto i : name) {
		std::cout << i << std::endl;
	}
}

