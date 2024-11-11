/*Задана действительная матрица aij размерности n×m. Написать
программу, которая определяет целые числа b1, b2, …, bn, равные индексам
максимальных элементов строк матрицы (если в строке 2 и более
максимальных элементов, то использовать любой индекс).*/
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    int n, m;

    // Input matrix dimensions
    cout << "Enter the number of rows (n): ";
    cin >> n;
    cout << "Enter the number of cols (m): ";
    cin >> m;
    double** matrix = new double*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new double[m];
    }
    srand(static_cast<unsigned int>(time(0)));
    cout << "Matrix elements :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = (rand() % 100) - 10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int* indices = new int[n];
    for (int i = 0; i < n; ++i) {
        int maxIndex = 0;
        for (int j = 1; j < m; ++j) {
            if (matrix[i][j] > matrix[i][maxIndex]) {
                maxIndex = j;
            }
        }
        indices[i] = maxIndex + 1;
    }
    cout << "Indexes of the max elements in each row: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Row: "<<i<<"   Max index: "<<indices[i] << " "<<endl;
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] indices;
    return 0;
}
