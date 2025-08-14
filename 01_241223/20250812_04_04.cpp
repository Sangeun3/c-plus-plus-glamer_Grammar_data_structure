#include <iostream>

int main()
{
	int J = 6;
	int G;

	int* K = &J;
	int* Y = &G;

	int** T = &Y;
	int** Q = &K ;


	std::cin >> G;

	std::cout << **T << *K;

}