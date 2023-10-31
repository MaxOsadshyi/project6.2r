#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <Windows.h>
using namespace std;

// Функція для створення та заповнення вектора випадковими числами
void createVector(vector<int>& vec, int size) {
    vec.resize(size);
    for (int i = 0; i < size; i++) {
        vec[i] = rand() % 100;  // Генерувати випадкові числа від 0 до 99
    }
}

// Функція для виведення вектора на екран у вигляді рядка
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << ' ';
    }
    cout << endl;
}

// Функція для пошуку найбільшого непарного елементу рекурсивним способом
int FLargestE(const vector<int>& vec, int index, int Savelargest) {
    if (index < vec.size()) {
        if (vec[index] % 2 != 0 && vec[index] > Savelargest) {
            Savelargest = vec[index];
        }
        return FLargestE(vec, index + 1, Savelargest);
    }
    return Savelargest;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(nullptr));

    int arraySize;
    cout << "Введіть розмір вектора: ";
    cin >> arraySize;

    vector<int> vec;

    createVector(vec, arraySize);

    cout << "Згенерований вектор: ";
    printVector(vec);

    // Рекурсивний спосіб
    int LargestE = FLargestE(vec, 0, 0);
    cout << "Найбільший непарний елемент (рекурсивний спосіб): " << LargestE << endl;

    return 0;
}
