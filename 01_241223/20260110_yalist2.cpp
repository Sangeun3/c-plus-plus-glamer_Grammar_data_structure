#include <iostream>
#include <list>

namespace ya
{
	template <typename T>
	class list
	{
	public:
		list()
		{
			head = nullptr;
			tail = nullptr;
		}

		struct Node
		{
			T data;
			Node* next;
			Node* prev;
		};

		void push_back(T data)
		{
			if (head == nullptr)
			{
				head = new Node;
				head->data = data;
				head->next = nullptr;
				head->prev = nullptr;
				tail = head;
			}
			else
			{
				(tail->next) = new Node;
				(tail->next)->data = data;
				(tail->next)->next = nullptr;
				(tail->next)->prev = tail;
				tail = (tail->next);
			}
		}

		void push_front(T data)
		{
			if (head == nullptr)
			{
				head = new Node;
				head->data = data;
				head->next = nullptr;
				head->prev = nullptr;
				tail = head;
			}
			else
			{
				(head->prev) = new Node;
				(head->prev)->data = data;
				(head->prev)->next = head;
				(head->prev)->prev = nullptr;
				head = (head->prev);
			}
		}
	private:
		Node* head;
		Node* tail;
	};
}

int main()
{
	ya::list<int> intlist;
	intlist.push_back(1);
	intlist.push_front(2);

	std::list<int> stdlist;
	stdlist.push_back(1);
	stdlist.push_front(2);
}