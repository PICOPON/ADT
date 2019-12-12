#include "pch.h"
#include "stack.h"


stack::stack()
{
	size = -1;
}

bool stack::push(std::string newone)
{
	if (newone.empty()) return false;
	st[++this->size] = newone;
}
std::string stack::pop()
{
	return st[this->size--];
}


stack::~stack()
{

}
