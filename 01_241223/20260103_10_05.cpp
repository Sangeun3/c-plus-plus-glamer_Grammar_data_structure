#include <iostream>

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node* head = new Node;
	head->data = 3;
	
	head->next = new Node;
	head->next->data = 5;

	head->next->next = new Node;
	head->next->next->data = 4;

	head->next->next->next = new Node;
	head->next->next->next->data = 2;

	head->next->next->next->next = nullptr;

	for (Node* cur = head; cur != nullptr; cur = cur->next)
	{
		std::cout << cur->data;
	}
}