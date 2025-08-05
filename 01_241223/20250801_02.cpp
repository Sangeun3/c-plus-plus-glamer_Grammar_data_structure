#include <iostream>
 
class car {
public:
	struct wheel //이너 클래스
	{
		int mRadius;
		int mThick;
	};
	void Init(int speed, int fuel, int radius, int thick)
	{
		mSpeed = speed;
		mFuel = fuel;
		for (size_t i = 0; i < 4; i++)
		{
			mwheels[i].mRadius = radius;
			mwheels[i].mThick = thick;
		}
	}


private:
	int mSpeed;
	int mFuel;

	wheel mwheels[4];
};

int main() {
	car ferari, avante, honda;
	ferari.Init(100,200,2,2);
	avante.Init(100, 200, 2, 2);
	honda.Init(100, 203, 3, 3);
}