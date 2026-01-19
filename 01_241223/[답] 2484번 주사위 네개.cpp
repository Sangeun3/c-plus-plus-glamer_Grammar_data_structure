#include <iostream>
#include <algorithm> // sort, max 함수 사용

using namespace std;

// [함수 분리] 
// 파이썬 코드의 def money(): 부분과 동일한 역할을 합니다.
int calculate_prize()
{
    int dice[4];
    for (int j = 0; j < 4; j++)
    {
        cin >> dice[j];
    }

    // 계산하기 쉽게 정렬 (파이썬의 sorted와 동일) 시간 복잡도: O(N log N)
    sort(dice, dice + 4);

    // 1. 같은 눈이 4개 (len(set) == 1)
    // 정렬했으므로 처음과 끝이 같으면 4개 모두 같은 숫자
    if (dice[0] == dice[3])
    {
        return 50000 + (dice[0] * 5000);
    }

    // 2. 같은 눈이 3개 (len(set) == 2, 그리고 가운데 두 숫자가 같음)
    // 예: 1 3 3 3 또는 3 3 3 6 -> 정렬하면 index 1번은 무조건 3개짜리 숫자
    if (dice[0] == dice[2] || dice[1] == dice[3])
    {
        return 10000 + (dice[1] * 1000);
    }

    // 3. 같은 눈이 2개씩 두 쌍 (len(set) == 2, 그리고 가운데 두 숫자가 다름)
    // 예: 2 2 5 5
    if (dice[0] == dice[1] && dice[2] == dice[3])
    {
        return 2000 + (dice[0] * 500) + (dice[2] * 500);
    }

    // 4. 같은 눈이 2개만 있는 경우 (나머지 케이스 중 반복문 체크)
    // 인접한 것끼리만 비교하면 됩니다.
    if (dice[0] == dice[1]) return 1000 + (dice[0] * 100);
    if (dice[1] == dice[2]) return 1000 + (dice[1] * 100);
    if (dice[2] == dice[3]) return 1000 + (dice[2] * 100);

    // 5. 모두 다른 눈 (else)
    // 정렬했으므로 가장 큰 숫자는 맨 뒤(dice[3])
    return dice[3] * 100;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int max_prize = 0;

    // N명만큼 반복하면서 함수 호출
    for (int i = 0; i < n; i++)
    {
        // 함수가 계산해준 상금을 받아서
        int current_prize = calculate_prize();

        // 최댓값 갱신 (파이썬의 max() 로직)
        if (current_prize > max_prize)
        {
            max_prize = current_prize;
        }
    }

    cout << max_prize << endl;

    return 0;
}