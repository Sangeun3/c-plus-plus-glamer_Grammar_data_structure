#include <iostream>
using namespace std;

int digit_sum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    int maxSum = -1;  // 자릿수 합의 최대값을 저장할 변수(초기값 -1)
    int answer = -1;  // 자릿수 합이 최대일 때의 자연수를 저장할 변수(초기값 -1)

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        int ds = digit_sum(num); // num의 자릿수 합

        // 자릿수 합이 더 크다면 갱신
        if (ds > maxSum) {
            maxSum = ds;
            answer = num;
        }
        // 자릿수 합이 같다면 더 큰 숫자를 선택
        else if (ds == maxSum && num > answer) {
            answer = num;
        }
    }

    cout << answer << endl;  // "자릿수 합이 최대"인 자연수 출력
    return 0;
}
