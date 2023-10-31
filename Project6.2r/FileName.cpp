#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <Windows.h>
using namespace std;

// ������� ��� ��������� �� ���������� ������� ����������� �������
void createVector(vector<int>& vec, int size) {
    vec.resize(size);
    for (int i = 0; i < size; i++) {
        vec[i] = rand() % 100;  // ���������� �������� ����� �� 0 �� 99
    }
}

// ������� ��� ��������� ������� �� ����� � ������ �����
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << ' ';
    }
    cout << endl;
}

// ������� ��� ������ ���������� ��������� �������� ����������� ��������
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
    cout << "������ ����� �������: ";
    cin >> arraySize;

    vector<int> vec;

    createVector(vec, arraySize);

    cout << "������������ ������: ";
    printVector(vec);

    // ����������� �����
    int LargestE = FLargestE(vec, 0, 0);
    cout << "��������� �������� ������� (����������� �����): " << LargestE << endl;

    return 0;
}
