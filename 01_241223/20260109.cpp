#include <iostream>

#include <list>

//class Node
//{
//	int data;
//	Node* next;
//};
//
//class NodeChar
//{
//	char data;
//	Node* next;
//};

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//float Add(float a, float b)
//{
//	return a + b;
//}

//템플릿
//템플릿 함수
template <typename T>
T Add(T a, T b)
{
	return a + b;
}


//특정 자료형에 대해서 템플렛 프로그래밍에서 제외시킬 수 있다. 템플릿 특수화
template <> //int형만 제외하는 템플릿
int Add(int a, int b)
{
	return a - b;
}

template <typename T>
class Node
{
public:
	T data;
	Node* next;
};


//장점: 편리함, 자료형에 대한 자율성 엄청 주어짐
//단점: 컴파일 시에 해당 코드들이 생기는 거기 때문에 컴파일타임이 늘어난다.

int main()
{
	int ret = Add<int>(3, 5); //컴파일시에.
	//int Add(int a, int b)
	//{
	//	return a + b;
	//}
	
	float fret = Add<float>(3.0f, 5.1f);

	Node<float> fNode;
	fNode.data = 10.0f;
    

}