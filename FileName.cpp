#include <iostream>
using namespace std;
int main()
{
	double x, y;
	char z;
	while (1)
	{
		cin >> x >> z >> y;
		if (z == '+')cout << x + y << endl;
		if (z == '-')cout << x - y << endl;
		if (z == '*')cout << x * y << endl;
		if (z == '/')
		{
			if (y == 0)cout << "����" << endl;
			else
				cout << x / y << endl;
		}
		if (z == '%')cout << int(x) % int(y) << endl;
	}
	if (z != '+' && '-' && '*' && '/' && '%')cout << "����" << endl;
	return 0;
}
