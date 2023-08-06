#include <bits/stdc++.h> 
int fun(int index,vector<int>&v1){
    if(index==0)return v1[index];
    if(index<0)return 0;
    int pick=v1[index]+fun(index-2,v1);
    int notpick=0+fun(index-1,v1);
    return max(pick,notpick);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    return fun(n-1,nums);
}
