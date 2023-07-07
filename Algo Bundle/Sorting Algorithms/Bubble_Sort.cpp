#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 5
using namespace std;
// Bubble sort: sorts the elements in the array from smallest to largest.

int main() {
    int i, j, temp;
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
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "After sorting :" << endl;
    for (i = 0; i < N; i++) {
        cout << setw(3) << arr[i];
    }

    return 0;
}
