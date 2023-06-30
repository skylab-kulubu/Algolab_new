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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,q;
    cin>>n>>k;
    vector<int>arr;
    for(int i=0 ; i<n ; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        auto lb = lower_bound(arr.begin(),arr.end(),k-t);
        auto ub = upper_bound(arr.begin(),arr.end(),k+t);
        cout<<ub-lb<<"\n";
    }
	return 0;
}