#include <iostream>
#include <string>

struct Person
{
	std::string name;
	Person* love1;
	Person* love2;
};

int main()
{
	Person* son = new Person;
	son->name = "Son";

	Person* mom = new Person;
	mom->name = "Mom";

	Person* wife = new Person;
	wife->name = "Wife";
	
	son->love1 = mom;
	son->love2 = wife;

	Person* head = son;
	std::cout << head->love1->name << " ";
	std::cout << head->love2->name;

}