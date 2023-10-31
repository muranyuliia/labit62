#include <iostream>
using namespace std;
int calculateSumOfMinMaxIndices(const int arr[], int n) {
    if (n <= 0) {
        return -1; // Повертаємо -1 у випадку порожнього масиву або недійсного n.
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
    cout << "Введіть розмір масиву: ";
    cin >> n;

    if (n <= 0) {
        cerr << "Недійсний розмір масиву." << endl;
        return 1;
    }

    int* arr = new int[n];
    cout << "Введіть " << n << " цілих чисел: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = calculateSumOfMinMaxIndices(arr, n);
    if (sum != -1) {
        cout << "Сума індексів мінімального та максимального елементів: " << sum << endl;
    }
    else {
        cerr << "Масив порожній." << endl;
    }

    delete[] arr;

    return 0;
}
