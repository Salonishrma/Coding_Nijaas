#include <bits/stdc++.h> 
#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.
    pair<char,int>p1;
    int ans=int((m1+m2+m3)/3);
    p1.first=firstLetterOfName;
    p1.second=ans;
    return p1;
}
