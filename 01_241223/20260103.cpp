#include <iostream>

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void AddNode(int data)
{
	if (head == nullptr)
	{
		//헤드에 추가를 해준다.
		head = new Node;
		head->data = data;
		head->next = nullptr;

		tail = head;
	}
	else
	{
		//제일 마지막 노드 뒤에 추가를 해준다.
		tail->next = new Node;
		tail->next->data = data;
		tail->next->next = nullptr;

		tail = tail->next;

	
	}
}

int main()
{
	AddNode(3);
	AddNode(4);
	AddNode(5);
	Node* p = head;
	while (p != nullptr)
	{
		std::cout << p->data;
		p = p->next;
	}

	for (Node* n = head; n != nullptr; n = n->next)
	{
		std::cout << n->data;
	}
}