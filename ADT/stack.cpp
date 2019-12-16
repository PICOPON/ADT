#include "pch.h"
#include "stack.h"


stack::stack()
{
	this->first = nullptr;
}

bool stack::push(std::string newone)
{
	if (first == nullptr) {
		first = new Node;
		first->info = newone;
		first->next = nullptr;
		return true;
	}
	else {
		for (Node* ptr = first; ; ptr = ptr->next) {
			if (ptr->next == nullptr) {
				ptr->next = new Node;
				ptr->next->info = newone;
				ptr->next->next = nullptr;
				return true;
			} //ptr->next 代指Node节点的next地址*****
		}
		return true;
	}
}
std::string stack::pop()
{
	std::string tp;
	if (first == nullptr) return "empty stack";
	Node* extro = first;
	for (Node* ptr = first; ; ptr = ptr->next) {
		if (ptr->next == nullptr) {
			if (extro == ptr) {
				first = nullptr;
				tp = ptr->info;
				delete ptr;
				break;
			}; //考虑第一种情况
			Node* temp = ptr;
			extro->next = nullptr;
			tp = temp->info;
			delete temp;
			break;// 考虑第二种情况
		}
		extro = ptr;
	}
	std::cout << "remained part" << std::endl;
	stack::showStack();
	return tp;
}

void stack::showStack()
{
	for (auto ptr = first; ptr != nullptr; ptr = ptr->next) {
		std::cout << ptr->info << std::endl;
	}
}


stack::~stack()
{
	for (auto ptr = first;ptr!=nullptr;) {
		Node* temp = ptr;
		ptr = ptr->next;
		delete temp;
	}
	std::cout << "stack destroyed" << std::endl;
}
