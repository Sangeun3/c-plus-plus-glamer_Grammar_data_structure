#include <iostream>
#include <list>

//수학에서의 벡터
//크기와 방향을 가진 화살표(점)

struct Vector2
{
	int x;
	int y;

	Vector2 operator+(Vector2 other)
	{
		Vector2 ret;
		ret.x = x + other.x;
		ret.y = y + other.y; // p1.y + p2.y
		return ret;
	}
	Vector2 operator-(Vector2 other)
	{
		Vector2 ret;
		ret.x = x - other.x;
		ret.y = y - other.y; // p1.y - p2.y
		return ret;
	}
	bool operator<(Vector2 other)
	{
		if (x < other.x && y < other.y)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
};
//연산자 오버로딩

int main()
{
	Vector2 p1;
	p1.x = 1;
	p1.y = 4;

	Vector2 p2;
	p2.x = 3;
	p2.y = 9;

	Vector2 p3;
	p3 = p1 + p2;
	/*
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	*/
	// == p1.operator+(p2);

	p3 = p1 - p2;

	if (p1 < p2)
	{
		std::cout << "작아요";
	}

	std::string test = "test";
	test += " success";

	return 0;
}