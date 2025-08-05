#include <iostream>
using namespace std;

int main() {
int main() {
    long long N;
    cin >> N;

    long long sum = 0;
    long long start = 1;  // 현재 구간 시작값 (1, 10, 100, ...)
    int digit = 1;        // 현재 자릿수 (1자리, 2자리, ...)

    while (start <= N) {
        long long end = start * 10 - 1; // 예: start=1 -> end=9, start=10 -> end=99
        if (end > N) end = N;          // N보다 넘어가면 N으로 조정

        // 구간 안에 들어 있는 숫자 개수
        long long countRange = end - start + 1;
        // 해당 구간의 모든 수는 'digit' 자릿수이므로
        sum += countRange * digit;

        // 다음 구간으로 넘어가기
        digit++;
        start *= 10;
    }

    cout << sum << "\n";
    return 0;
}
