#include <iostream>
using namespace std;

int main()
{
    cout << "0xB6" << endl; // a의 값 <--- 예시 정답 (a는 k를 가리키므로 k의 주소 0xB6)

    cout << "0x0A" << endl; // k의 값 (k의 값은 10)

    cout << "0x14" << endl; // t의 값 (t의 값은 20)

    cout << "0xC4" << endl; // c의 주소 (c의 주소는 0xC4)

    cout << "0x0A" << endl; // *a (a가 가리키는 곳(k)의 값)

    cout << "10" << endl; // **p (p가 가리키는 곳(a)이 가리키는 곳(k)의 값)

    cout << "0xB6" << endl; // &k (k의 주소)

    cout << "0xB6" << endl; // *p (p가 가리키는 곳(a)의 값, a의 값은 0xB6)

    return 0;
}
//메모리 주소, 변수 선언, 저장된 값, 설명
//0xC4, int c = 40; ,        40, c의 주소는 0xC4
//0xB6, int k = 10; ,         10, k의 주소는 0xB6
//0xD0, int t = 20; ,         20, t의 주소는 0xD0
//0xE0, int* a = &k; ,      0xB6, a는 k를 가리킴
//0xF0, int** p = &a; ,     0xE0, p는 a를 가리킴