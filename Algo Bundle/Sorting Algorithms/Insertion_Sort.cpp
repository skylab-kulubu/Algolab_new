#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 9
using namespace std;

// Insertion sort: sorts the elements in the array from smallest to largest.

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
    for (i = 1; i < N; i++) {
        j = i;
        while (j > 0 && arr[j] < arr[j - 1]) {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    cout << "After sorting :" << endl;
    for (i = 0; i < N; i++) {
        cout << setw(3) << arr[i];
    }

    return 0;
}
