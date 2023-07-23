#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/
class Solution {
public:

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(),[](const int &a, const int &b){
            return __builtin_popcount(a) < __builtin_popcount(b) || (__builtin_popcount(a) ==  __builtin_popcount(b) && a < b);
        });
        return arr;
    }
};