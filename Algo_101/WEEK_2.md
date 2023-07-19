## The Topics of the week
##### Algorithms
- Sorting Algorithms
- Search Algorithms

##### Bir mapte en değer kısmında en büyük sayıyı nasıl bulursun;
`std::map<int,int>::iterator best
        = std::max_element(mp.begin(),mp.end(),[] (const std::pair<int,int>& a, const    std::pair<int,int>& b)->bool{ return a.second < b.second; } );`


## Questions
- [https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/](https://leetcode.com/problems/majority-element/)
- https://leetcode.com/problems/search-a-2d-matrix-ii/
- https://codeforces.com/edu/courses
  
