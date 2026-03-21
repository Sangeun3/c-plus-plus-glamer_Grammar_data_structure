#include <iostream>


	/*
	n입력
	이름 dd mm yyyy 
	입력 나이,
	min 나이 이름
	max 나이 이름
	2020년이라고 치고
	2020-yyyy+1 * 365
	mm이 1,3,5,7,8,10,12

	12-> 12*31
	11-> 11* (30-dd+1) + 12*31
	10-> 10* (31-dd+1) + 11*30 + 12*31
	9 -> 9* 30 + 10*31 + 11*30 + 12*31
	8 -> 8*31 + 9* 30 + 10*31 + 11*30 + 12*31
	7 -> 7*31 + 8*31 + 9* 30 + 10*31 + 11*30 + 12*31
	...
	1 -> 1*31 + 2*30 + 3*31 + 4*30 + 5*31 + 6*30 + 7*31 + 8*31 + 9* 30 + 10*31 + 11*30 + 12*31

	*/

int mTod(int mm)
{
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
	{
		return 30;
	}
	else if (mm==2)
	{
		return 28;
	}
	else
	{
		return 31;
	}
}

int mToAge(int mm)
{
	int age = 0;
	for (int i = mm; i <= 12; i++)
	{
		age += mTod(i);
	}
	return age;
}


 
int main()
{
	int n;
	std::string name, minName, maxName;
	int dd, mm, yyyy;
	int age, minAge = 999999999, maxAge = 0;

	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> name >> dd >> mm >> yyyy;
		age = (2020 - yyyy + 1) * 365 + mToAge(mm) + mTod(mm) - dd;
		
		if (minAge > age)
		{
			minAge = age;
			minName = name;
		}

		if (maxAge < age) {
			maxAge = age;
			maxName = name;
		}
	}

	std::cout << minName << "\n" << maxName;
}