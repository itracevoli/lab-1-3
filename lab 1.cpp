//Равносторонний треугольник задается координатами своих вершин из плоскости: А(x1,y1), B(x2,y2), C(x3,y3). Найти сумму длин медиан треугольника ABC.
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;



int main()
{
    double x1, y1, x2, y2, x3, y3;
    cout<<"Enter the coordinates of A(x,y)\n";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of B(x,y)\n";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of C(x,y)\n";
    cin >> x3 >> y3;
    double xx1,yy1,xx2,yy2,xx3,yy3, ma, mb, mc;
    xx1 = (x2 + x3) / 2;
    yy1 = (y2 + y3) / 2;
    xx2 = (x1 + x3) / 2;
    yy2 = (y1 + y3) / 2;
    xx3 = (x2 + x1) / 2;
    yy3 = (y2 + y1) / 2;
    ma = sqrt((xx1 - x1) * (xx1 - x1) + (yy1 - y1) * (yy1 - y1));
    mb = sqrt((xx2 - x2) * (xx2 - x2) + (yy2 - y2) * (yy2 - y2));
    mc = sqrt((xx3 - x3) * (xx3 - x3) + (yy3 - y3) * (yy3 - y3));
    cout << "Summ of the lenght of the meridians is  " << ma + mb + mc << endl;  
}

