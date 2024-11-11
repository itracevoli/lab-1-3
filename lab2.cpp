#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, p, eps, x, x_prev;
    int iterations = 0;
    cout << "Enter a, p and epsilon(0.01:0.000001): \n";
    cin >> a >> p >> eps;
    x = a;
    do {
        x_prev = x;
        x = (1.0 / p) * ((p - 1) * x + a / pow(x, p - 1));
        iterations++;
    } while (abs(x - x_prev) > eps);

    cout << " The p-root of a: " << x << endl;
    cout << "Iterations count: " << iterations << endl;
}