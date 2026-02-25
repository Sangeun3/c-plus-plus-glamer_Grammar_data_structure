#include <iostream>
#include <string>
#include <string.h>
#include <list>
#include <vector>

namespace ya
{
	template <typename T>
	class vector
	{
	public:
		
		vector()
		{

		}
		~vector()
		{
			delete[] mArr; // new와 delete는 한 쌍입니다.
		}

		void reserve(size_t size)
		{
			mArr = new T[size];
			mCapacity = size;
		}

		void resize(size_t size)
		{
			if (size < mSize)
				return;

			reserve(size + (size / 2));
			mSize = size;

			memset(mArr, NULL, mCapacity);
		}
		/*
		앞에 함수 선언하고 뒤에 생성해서 구현하는 것처럼
		vector의 선언도 같습니다.

		하지만, 템플릿을 넣으면 main에서 ya::vector<int> vector; 이렇게 될때 자료형을 정하기 때문에
		파일 안에서 왔다갔다를 못 하게 됩니다. 그래서 vector를 구현하는 부분이 뒤에 들어갈 수 없습니다. 
		*/

		void push_back(T& value)
		{
			if (mSize >= mCapacity)
			{
				mCapacity *= 2;

				T* newArr = new T[mCapacity];
				//memcpy()
				for (size_t i = 0; i < mSize; i++)
				{
					newArr[i] = mArr[i];
				}
				delete[] mArr;

				newArr[mSize++] = value;
				mArr = newArr;
			}
		}

		T& operator[](size_t idx) { return mArr[idx]; }

		int capacity() { return mCapacity; }
		int size() { return mSize; }
	private:
		T* mArr;
		int mCapacity;
		int mSize;

	};
	
}

int main()
{
	ya::vector<int> vector;
	std::vector<int> stdvector;
	stdvector.resize(10);/* resize(10)으로 열 개 백터를 만든다. 실제로는 열 개 이상의 배열이 나옴.*/
	stdvector.reserve(15);

	stdvector[10] = 100;
	stdvector.push_back(2000);

	int cap = stdvector.capacity();

	vector.resize(10);
	vector[0] = 100;

	vector.resize(9);
	return 0;
}

//namespace ya
//{
//	void vector::vector()
//	{
//
//	}
//}