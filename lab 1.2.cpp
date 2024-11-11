#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;



int main()
{
	double x, y;
	cout << "Enter x\n";
	cin >> x;
	cout << "Enter y\n";
	cin >> y;
	if (x < 0 and y < 0) {
		cout <<"x = " << x * (-1) << "  " <<"y = " << y * (-1);
		/*cout <<"x = " << abs(x) << "  " <<"y = " << abs(y);*/
	}
	else if (x < 0 xor y < 0) {
		cout << "x = " << x + (0.5) << "  " << "y = " << y + (0.5);
	}
	else if ((0.5 <= x) and (x <= 2) and (0.5 <= y) and (y <= 2)) {
		cout << "x = " << x  << "  " << "y = " << y ;
	}
	else {
		cout << "x = " << x/10 << "  " << "y = " << y/10;
	}
	}
	
