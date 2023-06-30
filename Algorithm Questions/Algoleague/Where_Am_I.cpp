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
    int n,x,y;
    cin>>n>>x>>y;
    int ct=0;
    for(int i=1 ; i<=n ; i++){
        if(((i-1)<=y) && ((n-i)>=x))ct++;
    }
    cout<<ct;
	return 0;
}