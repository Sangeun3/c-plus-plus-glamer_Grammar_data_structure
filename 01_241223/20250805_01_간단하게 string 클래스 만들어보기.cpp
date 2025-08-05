#include <iostream>
#include <string>

//문자열 관련된 것들

int strlen(char* str)
{
	for (size_t i = 0; i < 10; i++)
	{
		if (str[i] == '\0') {
			return i;
		}
	}
}
// 이런 식으로 문자열 길이를 구했는데 이제는 sting 전처리기로 사용하자

class Mystring
{
public:

	Mystring(const char* str) //생성자
	{ 
		for (int i = 0; i < 256; i++) 
		{
			this->str[i] = '\0';
		}
		for (int i = 0; i < 256; i++)
		{
			if (str[i] == '\0')
			{
				len = i;
				break;
			}
			this->str[i] = str[i];
		}
		
	}

	void operator=(const char* str)
	{

	}
	int size()
	{
		return len;
	}
	void operator+=(const char* str)
	{
		int idx = 0;
		for (int i = len; i < 256; i++)
		{
			if (str[idx] == '\0')
			{
				len = i;
				break;
			}
			
			this->str[i] = str[idx++];
		}
	}

private:
	char str[256];
	int len;
};

int main()
{
	std::string str = "Hello";

	int len = str.size();
	str += " World";

	Mystring str2 = "ABCD";
	len = str2.size();
	str2 += "EFG";
	
	return 0;
}