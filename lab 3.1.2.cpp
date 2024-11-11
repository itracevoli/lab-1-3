/*Заданы целые числа a1, a2,…, an. Написать программу, которая
производит сортировку массива по возрастанию.*/
#include <iostream>
#include <cstdlib>
#include <ctime>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

void fillArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        arr[i] = rand() % 100;
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    const int stackSize = 10; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    int stackArray[stackSize];

    fillArray(stackArray, stackSize);
    std::cout << "До сортировки: ";
    printArray(stackArray, stackSize);
    
    bubbleSort(stackArray, stackSize);
    std::cout << "После сортировки: ";
    printArray(stackArray, stackSize);

    return 0;
}
