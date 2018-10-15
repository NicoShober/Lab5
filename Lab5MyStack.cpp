//Lab5MyStack.cpp
//Nico Shober

#include "stdafx.h"
#include <string>
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <list>
#include "Lab5mystack.h"

using namespace std;
using std::stack;
using std::vector;
using std::list;
using std::string;

string stringReversial1(string input)
{
	string output = "";
	stack<char> stack;
	for (int i = 0; i < input.length(); i++)
	{
		stack.push(input.at(i));
	}
	while (!(stack.empty()))
	{
		output.push_back(stack.top());
		stack.pop();
	}
	return output;
}

string stringReversial2(string input)
{
	string output = "";
	vector<char> vector;
	for (int i = 0; i < input.length(); i++)
	{
		vector.push_back(input.at(i));
	}
	while (!(vector.empty()))
	{
		output.push_back(vector.back());
		vector.pop_back();
	}
	return output;
}

string stringReversial3(string input)
{
	string output = "";
	list<char> list1;
	for (int i = 0; i < input.length(); i++)
	{
		list1.push_back(input.at(i));
	}
	while (!(list1.empty()))
	{
		output.push_back(list1.back());
		list1.pop_back();
	}
	return output;
}

string stringReversial4(string input)
{
	string output = "";
	MyStack mystack;
	for (int i = 0; i < input.length(); i++)
	{
		mystack.push(input.at(i));
	}
	while (!(mystack.isEmpty()))
	{
		output.push_back(mystack.pull());
	}
	return output;
}