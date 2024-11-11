/*Заданы целые числа a1, a2,…, an. Написать программу, которая
производит сортировку массива по возрастанию.*/
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int n;
    cout << "Enter size of an arr: ";
    cin >> n;
    vector<int> numbers(n);
    cout << "Enter elements of the arr:\n ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    cout << "Sorted arr(Final result) ";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}
*/
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cout << "Enter size of an arr:  ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100;
    }
    cout << "initial arr: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    sort(arr, arr + n);
    cout << "Sorted arr:  ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}