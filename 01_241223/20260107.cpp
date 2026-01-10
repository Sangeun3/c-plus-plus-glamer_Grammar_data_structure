#include <iostream>

struct Node
{
	int data;
	Node* next;

	void AddNode(Node* /*this*/, int data);
};
Node* head = nullptr;
Node* tail = nullptr;

void AddNode(Node* /*this*/, int data)
{
	if (head == nullptr)
	{
		head = new Node;
		head->data = data;
		head->next = nullptr;
		tail = head;
	}

	else
	{
		tail->next = new Node;
		tail->data = data;
		tail->next->next = NULL;

		tail = tail->next;
	}
}

int main()
{
	//절차지향
	AddNode(3);
	AddNode(4);
	AddNode(5);


	//절차지향 + 객체지향 = 멀티패러다임 언어
	Node p;
	p.AddNode(3);
}