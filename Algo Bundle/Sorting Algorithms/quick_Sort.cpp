#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5 
using namespace std;
//insertion sort , sorts the elements in the array from smallest to largest.

void quicksort(int arr[N],int first,int last){
    int temp,pivot,i,j;
    if(first < last){
        pivot = first;
        i=first;
        j=last;
        while(i<j){
            while(arr[i]<=arr[pivot] && i<last){
                i++;
            }
            while(arr[j]>arr[pivot]){
                j--;
            }
            if(i<j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr,first,last-1);
        quicksort(arr,j+1,last);
    }
}

int main(){
    int i,j,temp;
    int arr[N];
    srand(time(0));
    for(i=0;i<N;i++){
        arr[i] = rand()%100;
    }
    printf("Before sorting :\n");
    for(i=0;i<N;i++){
        printf("%3d",arr[i]);
    }printf("\n");
    quicksort(arr,0,N-1);
    printf("After sorting :\n");
    for(i=0;i<N;i++){
        printf("%3d",arr[i]);
    }printf("\n");
return 0;}
