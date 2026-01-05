#include <iostream>
#include <string>

struct Node
{
	char data;
	Node* left;
	Node* right;
};

int main()
{
	Node* head = new Node;
	Node* tail = new Node;

	head->data = 'A';
	head->left = new Node;
	head->right = new Node;
	tail = head;

	head->left->data = 'B';
	head->right->data = 'C';

	head->left->left = new Node;
	head->left->left->data = 'D';

	head->left->right = new Node;
	head->left->right->data = 'E';

	head->right->left = new Node;
	head->right->left->data = 'F';

	head->right->right = new Node;
	head->right->right->data = 'G';


	std::string cmd;
	std::cin >> cmd;
	if (cmd[0] == 'H')
	{
		Node* cur = head;

		for (int i = 0; i < cmd.length(); i++)
		{
			if (cmd[i] == 'L') {
				cur = cur->left;
			}
			else if (cmd[i] == 'R') {
				cur = cur->right;
			}
		}
	
	std::cout << cur->data;
	}
}