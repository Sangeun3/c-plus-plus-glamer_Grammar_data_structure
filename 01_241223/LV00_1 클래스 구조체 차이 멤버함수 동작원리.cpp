#include <iostream>

struct People
{
public:
	int age;
	int height;
	char name[256];
}; //����� ���� �ڷ���
//����ü�� �׻� public�̴�

class cPeople
{
	//�������� ������ ����Ʈ: private
public:
	int age;
	int height;
	void Falloffdream(/* People* const this*/) {
		//this ������ �ּ� �ٲ��x -> const
		height += 5;
		(*this).height += 1;
	}

	void exmple() const
	{
		this; 
		//�� ���� �Ұ�����
		//�Լ�
	}
private:
	char name[256]; //�߿��� ������
};
//��������� ��Ģ

//����ü�� Ŭ������ ���̴�
//����ü�� ����Ʈ �������� �����ڰ� public:
//Ŭ������ ����Ʈ �������� �����ڰ� private:
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

	//�ڷᱸ��


	//����ü, Ŭ���� (�� ����� ��ü) 
	People junjae;
	junjae.age = 10;
	junjae.height = 120;
	//junjae.name = "OSdjkladlj"; �ʱ�ȭ�Ҷ��� ����
	//strcpy(&junjae.name[0], "LeeJunJar"); // = for�� ������ ����
	strcpy_s(junjae.name, "����");

	addName(junjae);
	cPeople taehwan;
	taehwan.age = 10;
	//taehwan.

	printPeople(&junjae);
	
	cPeople Sangeun;
	Sangeun.height = 148;
	Sangeun.Falloffdream();
	//Sangeun�� �ּ� �ѱ� �Ͱ� ����
	std::cout << Sangeun.height;


	const int num = 100;

	int num2 = 200;
	int* const p = &num2;
	//p = &num2; �̰� �� ��


	int* const p2 = &num2; //�ּҰ��� ���ٲ�
	const int* p3 = &num2; 
	//�����Ͱ� ����Ű�� ���� ���ٲ�

	const int* const p4 = &num2;
	//�� �� �� �ٲ۴�.
}