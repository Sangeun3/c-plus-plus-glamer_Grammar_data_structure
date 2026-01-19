#include <iostream>
#include <list>

namespace ya 
{
	template <typename T>
	class list
	{
	public:
		struct Node
		{
			T data;
			Node* back;
			Node* front;
		};

		list()
		{
			head = nullptr;
			tail = nullptr;
		}

		void push_back(T data)
		{
			if (head == nullptr)
			{
				head = new Node;
				head->data = data;
				head->back = nullptr;
				head->front = nullptr;
				tail = head;
			}
			else
			{
				(tail->back) = new Node;
				(tail->back)->back = nullptr;
				(tail->back)->front = tail;
				(tail->back)->data = data;
				tail = (tail->back);
			}
		}

		void push_front(T data)
		{
			if (head == nullptr)
			{
				head = new Node;
				head->data = data;
				head->back = nullptr;
				head->front = nullptr;

				tail = head;
			}
			else
			{
				(head->front) = new Node;
				(head->front)->data = data;
				(head->front)->back = head;
				(head->front)->front = nullptr;
				head = (head->front);
			}
		}

	private:
		Node* head;
		Node* tail;
	};


}

int main()
{
	ya::list<int> intList;
	intList.push_back(3);
	intList.push_back(4);
	intList.push_back(5);
	intList.push_front(2);

	std::list<int> stdList;
	stdList.push_back(3);
	stdList.push_back(4);
	stdList.push_back(5);
	stdList.push_front(2);

	return 0;
}