#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, c;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;

	if (a>b && a>c)
	{
		cout << "The largest of the three numbers is: " << a << endl;
	}
	else if (b>a && b>c)
	{
		cout << "The largest of the three numbers is: " << b << endl;
	}
	else if (c>a && c>b)
	{
		cout << "The largest of the three numbers is: " << c << endl;
	}
	else
	{
		cout << "Two or more numbers have the same value. ";
	}

_getch();
return 0;
}