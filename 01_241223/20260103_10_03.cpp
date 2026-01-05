#include <iostream>

struct Node
{
	int data;
	Node* left;
	Node* right;
};

int main()
{
	Node* head = new Node;
	head->left = new Node;
	head->right = new Node;
	head->right->left = new Node;

	delete head->right->left; // 1. 손자 먼저 삭제
	delete head->left;        // 2. 왼쪽 자식 삭제
	delete head->right;       // 3. 오른쪽 자식 삭제 (손자는 이미 지웠으니 안전)

	delete head;              // 4. 마지막으로 본체 삭제

	return 0;
}