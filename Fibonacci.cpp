// Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//napisac iteracyjnie i porownac z rekurencja, przy ktorej wartosci rekurencja przestaje dzialac i lepiej iteracyjnie
//nwd zaimplementowac

#include <iostream>

void fibonacci(int a)
{
	int x = 0;
	int y = 1;
	int z;

	while (a >= x)
	{
		z = x + y;//1, 2
		std::cout << x << std::endl;//print 0,1
		x = y;//x=1, 1
		y = z;//y = 1,2
		

	}
}


int main()
{
	int a;
	std::cout << "Podaj liczbe:" << std::endl;
	std::cin >> a;
	fibonacci(a);
}
