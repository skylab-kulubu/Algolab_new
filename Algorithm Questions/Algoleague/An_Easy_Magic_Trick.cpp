/*
****************************
*                          *
*     Author : erygle      *
*                          *
****************************
*/
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<ll>arr(1024);
    for(ll i=1 ; i<=1024 ; i++)cin>>arr[i];
    ll left=1,right=1024;
    while(left<=right){
        ll mid = (left + right)/2;
        if(n<arr[mid]){
            right = mid-1;
            cout<<mid<<" "<<arr[mid]<<"\n";
        }
        else if(n==arr[mid]){
            cout<<mid<<" "<<arr[mid]<<"\n";
            return 0;
        }
        else{
            left = mid+1;
            cout<<mid<<" "<<arr[mid]<<"\n";
        }
    }
    return 0;
}