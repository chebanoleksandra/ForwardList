#pragma once

class Node
{
public:
	int value;
	Node* next;
	Node() : value(0), next(nullptr) {}
	Node(int value) : value(value), next(nullptr) {}
};
class ForwardList
{
	Node* head;
	Node* tail;
public:
	ForwardList() : head(nullptr), tail(nullptr) {}
	void push_back(int value);
	void print();
};

