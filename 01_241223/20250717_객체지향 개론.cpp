#include <iostream>
using namespace std;

//객체지향 (oop)
//데이터 + 로직
struct Knight
{
	int hp;
	int attack;
	int defence;
};

int main() {
	Knight k1;
	k1.hp = 100;
	k1.attack = 10;
	k1.defence = 1;
}