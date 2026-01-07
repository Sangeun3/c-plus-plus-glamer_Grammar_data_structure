#include <iostream>

using namespace std;

int n;          // 주사위 개수
int path[10];   // 주사위 눈금을 기록할 배열 (최대 10개라고 가정)

// level: 현재 던져야 할 주사위의 순번 (0번째, 1번째 ... n-1번째)
void run(int level) {

    // [기저 조건] n개의 주사위를 모두 던졌으면 출력하고 종료(return)
    if (level == n) {
        for (int i = 0; i < n; i++) {
            cout << path[i]; // 공백 없이 붙여서 출력 (예: 11)
        }
        cout << endl;
        return;
    }

    // [재귀 호출] 1부터 6까지 눈금을 선택하고 다음 주사위로 넘어감
    for (int i = 1; i <= 6; i++) {
        path[level] = i; // 현재 주사위 눈금 기록
        run(level + 1);  // 다음 주사위 던지러 들어감 (level 증가)
    }
}

int main() {
    cin >> n;

    // 0번째 주사위부터 던지기 시작
    run(0);

    return 0;
}