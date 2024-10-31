#include "ForwardList.h"
#include <iostream>
using namespace std;

void ForwardList::push_back(int value)
{
	if (head && tail)
	{
		Node* new_node = new Node(value);
		tail->next = new_node;
		tail = new_node;
	}
	else
	{
		Node* new_node = new Node(value);
		head = new_node;
		tail = new_node;
	}
}

void ForwardList::print()
{
	Node* current = head;
	while (current!=nullptr)
	{
		cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}
