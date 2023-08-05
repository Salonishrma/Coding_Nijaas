#include <bits/stdc++.h> 
int fun(int index,vector<int> &heights){
    if(index==0){
        return 0;
    }
    int left=fun(index-1,heights)+abs(heights[index]-heights[index-1]);
    int right=INT_MAX;
    if(index>1)
    right=fun(index-2,heights)+abs(heights[index]-heights[index-2]);
    return min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    return fun(n-1, heights);
}
