#pragma once
#include <string>
#include <iostream>
class queue
{
private:
	int count;
	std::string name[10];//定长队列，数组实现
	struct Node{
		std::string info;
		Node* next;
	};
	Node* first;
public:
	queue();
	queue(std::initializer_list<const char*> inputArray);
	queue(std::string inial_list[], int len);
	~queue();

	void addToQueue(std::string name);
	void addToListQueue(std::string name);
	void pop();
	void popFromList();
	void showList()const;
	void show()const;
};

