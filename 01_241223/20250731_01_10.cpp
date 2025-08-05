#include <iostream>
#include <typeinfo>

int main() {
	class car
	{
		int wheel[4][2];
		int speed;
		int fuel;
	public:
		void setwheel(int inch, int radius)
		{
			for (int i = 0; i < 4; i++)
			{
				wheel[i][0] = inch;
				wheel[i][1] = radius;
			}
		}

		void setspeed(int spd)
		{
			speed = spd;
		}

		void setfuel(int f)
		{
			fuel = f;
		}
		void printData() {
			std::cout << "speed : " << speed << "km\n";
			std::cout << "fuel : " << fuel << "l\n";
			for (int i = 0; i < 4; i++) {
				std::cout << "whell[" << i << "] : size " << wheel[i][0] << "inch radius " << wheel[i][1] << "cm\n";
			}
		}
	};

	car ferai;
	car avante;
	ferai.setspeed(200);
	ferai.setfuel(100);
	ferai.setwheel(5, 20);
	std::cout << "ferai\n";
	ferai.printData();

	avante.setspeed(100);
	avante.setfuel(50);
	avante.setwheel(3, 20);
	std::cout << "avante\n";
	avante.printData();



	return 0;
}