#include <iostream>
//LV05 재귀함수에 대한 착각과 진실
//재귀함수 : 자기 자신을 호출하는 함수보다는
//코드 재활용해서 함수 호출
void ABC()
{

}

void test(int x)
{
	/*std::cout << x;
	ABC();*/
	//무한정 호출되는 함수를
	//방지해야 하는게 급선무이다.
	
	if (x == 3)
	{
		return;
	}
	
	test(x + 1);
	std::cout << x;
}

int arr[5] = { 5,7,1,2,3 };

void arrtest(int x)
{
	if (x == 5)
	{
		return;
	}
	std::cout << arr[x];
	arrtest(x + 1);
}
int main()
{
	test(0);
	std::cout << std::endl;
	arrtest(0);
	return 0;
 }