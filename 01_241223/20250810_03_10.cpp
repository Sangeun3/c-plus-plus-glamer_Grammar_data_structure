#include <iostream>

class Person
{
	char name[30] = {};
	char address[30] = {};
	int phone[15] = {};

	Person(char* name_, char* address_, int* phone_)
	{
		strcpy(name, name_);
		strcpy(address, address_);
		memcpy(phone, phone_, sizeof(phone));
	}
public:
	char* getName()
	{
		return name;
	}
	char* getAddress()
	{
		return address;
	}
	int* getPhone()
	{
		return phone;
	}

	void setName(char* name_)
	{
		strcpy(name, name_);
	}
	void setAddress(char* address_)
	{
		strcpy(address, address_);
	}
	void setPhone(char* phone_)
	{
		memcpy(phone, phone_, sizeof(phone));
	} 
};
int main()
{

	Person p("≈Ÿ", "«¡∏ﬁ2", 1114);
	
}