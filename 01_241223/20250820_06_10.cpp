#include <iostream>

void function(int * a, int n)
{
	if (n == 10) return;
	function(a, n + 1);
	std::cout << a[n] << " ";
}
int main()
{
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
	function(A, 0);

}