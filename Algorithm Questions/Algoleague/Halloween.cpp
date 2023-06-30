/*
****************************
*                          *
*     Author : erygle      *
*                          *
****************************
*/
#include <bits/stdc++.h>

using namespace std;

int main() {

    int size;
    cin>>size;
    vector<int>arr(size);
    if(size==1){
        cout<<"1\n";
        return 0;
    }
    for(int i=0 ; i<size ; i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    int candy;
    cin>>candy;
    int sum=0;
    for(int i=0 ; i<size-1 ; i++){
        int temp = arr[size-1]-arr[i];
        sum+=temp;
    }
    
    if(candy==sum){
        cout<<"1\n";
        return 0;
    }
    if(candy>sum && (candy-sum)%size == 0){
        cout<<"1\n";
    }
    else{
        cout<<"0\n";
    }
    
	return 0;
}