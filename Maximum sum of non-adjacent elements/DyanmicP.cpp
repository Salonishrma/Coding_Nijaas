#memoization
#include <bits/stdc++.h> 
int fun(int index,vector<int>&v1,vector<int>&dp){
    if(index==0)return v1[index];
    if(index<0)return 0;
    if (dp[index]!=-1) return dp[index];
    int pick=v1[index]+fun(index-2,v1,dp);
    int notpick=0+fun(index-1,v1,dp);
    return dp[index]=max(pick,notpick);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    vector<int>dp(n,-1);
    return fun(n-1,nums,dp);
}
