#include <iostream>

using namespace std;

// O: 올바른 방법 (매 연산마다 모듈러 수행)
long long pow_custom(long long a, long long b, long long mod) {
    long long ret = 1;
    a %= mod; // a가 mod보다 클 경우를 대비해 한 번 나머지 연산

    while (b > 0) {
        // b가 홀수면 결과값에 a를 곱함 (이때도 모듈러 수행!)
        if (b % 2 == 1) {
            ret = (ret * a) % mod;
        }
        // a를 제곱함 (이때도 모듈러 수행! 안 하면 여기서 오버플로우 발생)
        a = (a * a) % mod;
        b /= 2;
    }
    return ret;
}

int main() {
    // 2의 100승을 1,000,000,007로 나눈 나머지
    cout << pow_custom(2, 100, 1000000007) << endl;
    return 0;
}