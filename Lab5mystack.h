//Lab5mystack.h
//Nico Shober

#include "stdafx.h"
#include <string>
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <list>

using namespace std;
using std::stack;
using std::vector;
using std::list;
using std::string;

#ifndef LAB5MYSTACK_H
#define LAB5MYSTACK_H

string stringReversial1(string input);

string stringReversial2(string input);

string stringReversial3(string input);

string stringReversial4(string input);

class MyStack
{
private:
	vector< double > store;
public:
	MyStack() {}

	~MyStack() {}

	void push(char& item) {
		store.push_back(item);
	}

	char pull() {
		char item = store.back();
		store.pop_back();
		return item;
	}

	bool isEmpty() {
		return store.size() == 0;
	}

};

#endif