// ADT.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "stack.h"

int main()
{
	stack stc;
	stc.push("wy");
	stc.push("li");
	stc.push("ja");
	stc.showStack();
	stc.pop();
	stc.pop();
	stc.pop();
}
