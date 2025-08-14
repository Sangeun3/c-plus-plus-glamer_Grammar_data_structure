#include <iostream>

class Date
{
	int year, month, day;
	char* a;
public:
	Date(int year_, int month_, int day_)
		: year(year_),
		month(month_),
		day(day_)
	{

	}
	Date(char* a_)
		:a(a_)
	{

	}


};
int main()
{
	using namespace std;
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}