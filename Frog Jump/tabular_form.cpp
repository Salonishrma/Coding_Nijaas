#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n,-1);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int firststep=dp[i-1]+abs(heights[i]-heights[i-1]);
        int secondstep=INT_MAX;
        if(i>1){
        secondstep=dp[i-2]+abs(heights[i]-heights[i-2]);
        }
        dp[i]=min(firststep,secondstep);
    }
    return dp[n-1];
}
