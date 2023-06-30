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
    set<int>arr;
    for(int i=0 ; i<size ; i++){
        int temp;
        cin>>temp;
        arr.insert(temp);
    }int sum=0;
    for(auto k : arr)sum+=k;
    cout<<round(sum/arr.size());
	return 0;
}