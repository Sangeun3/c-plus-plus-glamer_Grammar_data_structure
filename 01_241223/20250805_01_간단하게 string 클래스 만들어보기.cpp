#include <iostream>
#include <string>

//���ڿ� ���õ� �͵�

int strlen(char* str)
{
	for (size_t i = 0; i < 10; i++)
	{
		if (str[i] == '\0') {
			return i;
		}
	}
}
// �̷� ������ ���ڿ� ���̸� ���ߴµ� ������ sting ��ó����� �������

class Mystring
{
public:

	Mystring(const char* str) //������
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