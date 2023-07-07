#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#define N 5
using namespace std;
// Heap sort: sorts the elements in the array from smallest to largest.

void heapify(int arr[], int n, int i) {
    int largest = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    int i, temp;
    int arr[N];
    srand(time(0));
    for (i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Before sorting :" << endl;
    for (i = 0; i < N; i++) {
        cout << setw(3) << arr[i];
    }
    cout << endl;

    heapSort(arr, N);

    cout << "After sorting :" << endl;
    for (i = 0; i < N; i++) {
        cout << setw(3) << arr[i];
    }
    cout << endl;

    return 0;
}
