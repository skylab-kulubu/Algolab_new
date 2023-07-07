#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 5

int main() {
    int i, find, control = 0;
    int arr[N];

    srand(time(0));

    for(i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }

    cout << "ARRAY:" << endl;

    for(i = 0; i < N; i++) {
        cout << setw(3) << arr[i];
    }
    cout << endl;

    cout << "Please enter which number you want:" << endl;
    cin >> find;

    // Beginning of the search
    for(i = 0; i < N; i++) {
        if(find == arr[i]) {
            cout << find << " is at position " << i+1 << " in the array." << endl;
            control = 1;
            break;
        }
    }
    if(control == 0) {
        cout << find << " number is not found in the array." << endl;
    }
    return 0;
}
