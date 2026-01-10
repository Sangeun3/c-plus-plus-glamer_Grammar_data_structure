#include <iostream>
#include <list>


namespace ya //namespace가 뭔지 모르겠다.
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

		list() //생성자: 객체가 생성될때 (메모리에 할당될때) 자동으로 호출되는 함수
		{
			mHead = nullptr;
			mTail = nullptr;
		}
		~list() //소멸자: 객체가 사라질때 (메모리에 해제될때) 자동으로 호출되는 함수
		{

		}
		void push_back(T data)
		{
			if (mHead == nullptr)
			{
				mHead = new Node();
				//(*mHead).data = data;
				mHead->front = nullptr;
				mHead->back = nullptr;
				mHead->data = data;

				mTail = mHead;
			}
			else
			{
				mTail->back = new Node();
				
				(mTail->back)->front = mTail;
				(mTail->back)->back = nullptr;
				(mTail->back)->data = data;

				mTail = mTail->back;
			}
		}
		void push_front(T data)
		{
			if (mHead == nullptr)
			{
				mHead = new Node();
				mHead->front = nullptr;
				mHead->back = nullptr;
				mHead->data = data;
				mTail = mHead;
			}
			else
			{
				(mHead->front) = new Node();

				(mHead->front)->front = nullptr;
				(mHead->front)->back = mHead;
				(mHead->front)->data = data;
				mHead = mHead->front;
				
			}
		}
	private:
		Node* mHead;
		Node* mTail;
	};
}
int main()
{
	std::list<int> stlList;
	stlList.push_back(10);
	stlList.push_back(20);
	stlList.push_back(-10);

	ya::list<int> yaList;
	yaList.push_back(1);
	yaList.push_back(2);
	yaList.push_back(3);
	yaList.push_front(4);
}