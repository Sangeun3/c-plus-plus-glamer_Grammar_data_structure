#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> 
namespace ya {
	class string {

	public:
		string() : mStr(nullptr) //초기화 (멤버 이니셜라이저)
		{

		}
		string(const char* str)
			:mStr(nullptr)
		{
			int len = strlen(str);
			mLen = len;
			mStr = new char[len + 1];

			strcpy(mStr, str);
			mStr[len] = '\0';
		}

		~string() {
			delete[] mStr;
		}

		void operator+= (const char* str)
		{
			int mStrLen = strlen(mStr);
			int strLen = strlen(str);
			int newLen = mStrLen + strLen;

			char* newStr = new char[newLen + 1];
			
			int idx = 0;
			for (int i = 0; i < mStrLen; i++)
			{
				newStr[idx++] = mStr[i];
			}
			for (int i = 0; i <= strLen; i++)
			{
				newStr[idx++] = str[i];
			}
			
			char* deletStr = mStr; //삭제할 주소를 저장
			mStr = newStr; //주소를 옮기고

			delete deletStr; //삭제
			mLen = newLen;
		}

		int length()
		{
			return mLen;
		}

	private:
		char* mStr;
		int mLen;

	};

	

}

int main()
{
	std::string hello = "Hello";
	hello += " World";
	std::cout << hello;
	//ya::string yahello;
	ya::string yahello("hello");
	yahello += "World";
	yahello.length();
	//std::string hello = "Hello";

}
