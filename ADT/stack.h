#pragma once
#include <string>
#include <iostream>
class stack
{
private:
	struct Node {
		std::string info;
		Node* next;
	};
	Node* first;
public:
	stack();

	bool push(std::string newone);
	std::string pop();
	void showStack();
	~stack();
};

