// ADT.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "queue.h"

int main()
{
	auto a = { "www","eee"};
	std::string inputArray[] = { "w","wr","nr" };
	queue q1(inputArray,3);
	q1.showList();
	/*
	q1.addToListQueue("w");
	q1.addToListQueue("z");
	q1.addToListQueue("y");
	q1.addToListQueue("m");
	q1.showList();
	std::cout << "pop begin" << std::endl;
	q1.popFromList();
	q1.showList();
	q1.popFromList();
	q1.showList();*/
}
