#pragma once
#include <string>
class stack
{
private:
	int size;
	std::string st[10];
public:
	stack();
	bool push(std::string newone);
	std::string pop();
	~stack();
};

