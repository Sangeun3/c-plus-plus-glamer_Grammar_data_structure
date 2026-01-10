#include <iostream>


class Array
{

};
int main() {
    srand(time(NULL)); // 랜덤 시드 설정

    Array arr1(3); // 크기가 3인 배열 객체 생성
    Array arr2(5); // 크기가 5인 배열 객체 생성

    arr1.PrintArray(); // arr1의 내용 출력
    arr2.PrintArray(); // arr2의 내용 출력

    return 0;
}