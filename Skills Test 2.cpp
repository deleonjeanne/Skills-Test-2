#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y;
	cout << "Enter an integer: ";
	cin >> x;
	cout << "Multiplication table of " << x << endl;

	for (y=1; y<=10; y++)
	{
		cout << y << " * " << x << " * " << y*x << endl;
	}
_getch();
return 0;
}
