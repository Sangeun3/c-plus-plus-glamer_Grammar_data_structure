#include <iostream>
#include <cstdlib> // rand, srand 사용을 위해 필요
#include <ctime>   // time 사용을 위해 필요

using namespace std;

class Array {
private:
    int* ptr; // 힙에 할당된 배열의 주소를 저장할 포인터
    int size; // 배열의 크기를 기억할 변수

public:
    // [생성자] 객체가 만들어질 때 자동으로 호출
    Array(int n) {
        size = n;
        ptr = new int[n]; // 1. 크기 n만큼 힙 메모리 할당

        // 2. 랜덤 값 채우기
        for (int i = 0; i < size; i++) {
            ptr[i] = rand() % 100; // 0~99 사이의 랜덤 숫자
        }
    }

    // [멤버 함수] 배열 내용 출력
    void PrintArray() {
        for (int i = 0; i < size; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl; // 줄바꿈
    }

    // [소멸자] 객체가 사라질 때 자동으로 호출 (매우 중요!)
    ~Array() {
        // 배열로 할당했으므로 반드시 delete[]를 사용해야 함
        delete[] ptr;
        // cout << "메모리 해제 완료" << endl; // (확인용 로그)
    }
};

// 문제에서 제공된 main 함수
int main() {
    srand(time(NULL));

    Array arr1(3); // 생성자 호출 -> 크기 3 할당
    Array arr2(5); // 생성자 호출 -> 크기 5 할당

    arr1.PrintArray();
    arr2.PrintArray();

    // main 함수가 끝나면서 arr1, arr2 객체가 사라짐
    // -> 이때 소멸자(~Array)가 자동으로 호출되어 메모리가 해제됨
    return 0;
}