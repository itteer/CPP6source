// swaps.cpp -- swapping with references and with pointers.
#include <iostream>
using namespace std;

void swapr(int & a, int & b);
void swapp(int *p, int * q);
void swapv(int a, int b);

int main()
{
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "waller1 = $" << wallet1 << " wallet2 = $" << wallet2 << endl;
	cout << "Using references to swap contents:" << endl;
	swapr(wallet1, wallet2);
	cout << "waller1 = $" << wallet1 << " wallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap contents again:" << endl;
	swapp(&wallet1, &wallet2);
	cout << "waller1 = $" << wallet1 << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by value:" << endl;
	swapv(wallet1, wallet2);
	cout << "waller1 = $" << wallet1 << " wallet2 = $" << wallet2 << endl;
	return 0;
}
void swapr(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int * p, int * q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

