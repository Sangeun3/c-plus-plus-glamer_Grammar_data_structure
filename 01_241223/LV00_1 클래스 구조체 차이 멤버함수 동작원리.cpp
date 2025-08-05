#include <iostream>

struct People
{
public:
	int age;
	int height;
	char name[256];
}; //사용자 정의 자료형
//구조체는 항상 public이다

class cPeople
{
	//접근제한 지정자 디폴트: private
public:
	int age;
	int height;
	void Falloffdream(/* People* const this*/) {
		//this 포인터 주소 바뀌면x -> const
		height += 5;
		(*this).height += 1;
	}

	void exmple() const
	{
		this; 
		//값 변경 불가능한
		//함수
	}
private:
	char name[256]; //중요한 데이터
};
//개방폐쇄의 원칙

//구조체와 클래스의 차이는
//구조체는 디폴트 접근제한 지정자가 public:
//클래스는 디폴트 접근제한 지정자가 private:
void addName(People p1) {
	p1.age += 1;
}

void printPeople(People *p1) {
	(*p1).age = 11;
}

void AddHeight(People* p1) {
	(*p1).height += 1;
}
int main()
{

	//자료구조


	//구조체, 클래스 (로 만든게 객체) 
	People junjae;
	junjae.age = 10;
	junjae.height = 120;
	//junjae.name = "OSdjkladlj"; 초기화할때만 가능
	//strcpy(&junjae.name[0], "LeeJunJar"); // = for문 돌려서 복사
	strcpy_s(junjae.name, "준재");

	addName(junjae);
	cPeople taehwan;
	taehwan.age = 10;
	//taehwan.

	printPeople(&junjae);
	
	cPeople Sangeun;
	Sangeun.height = 148;
	Sangeun.Falloffdream();
	//Sangeun의 주소 넘긴 것과 같음
	std::cout << Sangeun.height;


	const int num = 100;

	int num2 = 200;
	int* const p = &num2;
	//p = &num2; 이게 안 됨


	int* const p2 = &num2; //주소값을 못바꿈
	const int* p3 = &num2; 
	//포인터가 가리키는 값을 못바꿈

	const int* const p4 = &num2;
	//둘 다 못 바꾼다.
}