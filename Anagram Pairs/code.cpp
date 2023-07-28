#include<bits/stdc++.h>
bool isAnagram(string str1, string str2)
{
    //Write your code here
     int n=str1.size();
     int m=str2.size();
     if(n!=m){
         return false;
     }
    map<char,int>m1;
    map<char,int>m2;
    for (int i = 0; i < n; i++) {
        m1[str1[i]]++;
    }
    for (int i = 0; i < m; i++) {
       
        m2[str2[i]]++;
    }
   if (m1!=m2)
     return false;
   return true;
}
