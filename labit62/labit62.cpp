#include <iostream>
using namespace std;
int calculateSumOfMinMaxIndices(const int arr[], int n) {
    if (n <= 0) {
        return -1; // ��������� -1 � ������� ���������� ������ ��� ��������� n.
    }

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    return minIndex + maxIndex;
}

int main() {
    int n;
    cout << "������ ����� ������: ";
    cin >> n;

    if (n <= 0) {
        cerr << "�������� ����� ������." << endl;
        return 1;
    }

    int* arr = new int[n];
    cout << "������ " << n << " ����� �����: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = calculateSumOfMinMaxIndices(arr, n);
    if (sum != -1) {
        cout << "���� ������� ���������� �� ������������� ��������: " << sum << endl;
    }
    else {
        cerr << "����� �������." << endl;
    }

    delete[] arr;

    return 0;
}
