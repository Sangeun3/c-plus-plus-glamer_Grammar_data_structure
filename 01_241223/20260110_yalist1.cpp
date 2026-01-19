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
			Node* front;
			Node* back;
		};
	
		list()
		{
			mhead = nullptr;
			mtail = nullptr;
		}

		void push_back(T data)
		{
			if (mhead == nullptr)
			{
				mhead = new Node;
				mhead->data = data;
				mhead->back = nullptr;
				mhead->front = nullptr;
				mtail = mhead;
			}
			else
			{
				(mtail->back) = new Node;
				(mtail->back)->data = data;
				(mtail->back)->back = nullptr;
				(mtail->back)->front = mtail;

				mtail = mtail->back;
			}
		}

		void push_front(T data)
		{
			if (mhead == nullptr)
			{
				mhead = new Node;
				mhead->data = data;
				mhead->back = nullptr;
				mhead->front = nullptr;
				mtail = mhead;
			}
			else
			{
				(mhead->front) = new Node;
				(mhead->front)->data = data;
				(mhead->front)->front = nullptr;
				(mhead->front)->back = mhead;
				mhead = mhead->front;
			}
		}
		
	private:
		Node* mhead;
		Node* mtail;
	};
}




int main()
{
	ya::list<int> intList;

	intList.push_back(1);
	intList.push_back(2);

	std::list<int> stdList;
	stdList.push_back(1);
	stdList.push_back(2);

	return 0;
}