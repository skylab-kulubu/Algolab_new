#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 
using namespace std;

// Selection sort: sorts the elements in the array from smallest to largest.

int main(){
    int i, j, temp, select;
    int arr[N];
    srand(time(0));
    for(i = 0; i < N; i++){
        arr[i] = rand() % 100;
    }
    cout << "Before sorting :" << endl;
    for(i = 0; i < N; i++){
        cout << setw(3) << arr[i];
    }
    cout << endl;
    for(i = 0; i < N - 1; i++){
        select = i;
        for(j = i + 1; j < N; j++){
            if(arr[select] > arr[j]){
                select = j;
            }
        }
        if(select != i){
            temp = arr[i];
            arr[i] = arr[select];
            arr[select] = temp;
        }
    }
    cout << "After sorting :" << endl;
    for(i = 0; i < N; i++){
        cout << setw(3) << arr[i];
    }

    return 0;
}
