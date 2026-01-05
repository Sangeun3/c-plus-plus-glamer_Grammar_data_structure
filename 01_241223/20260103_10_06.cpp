#include <iostream>

struct Node
{
	char data;
	Node* next;
};
int main()
{
	char chars[5];
	Node* head = new Node;
	Node* cur = head;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> chars[i];
		cur->data = chars[i];
		cur->next = new Node;
		cur = cur->next;
	}
	cur = head;
	
	while (cur->next != nullptr)
	{
		cur = cur->next;
	}
	std::cout << cur->data;
}