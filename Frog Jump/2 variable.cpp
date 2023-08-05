#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    
    int prev1=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int firststep=prev1+abs(heights[i]-heights[i-1]);
        int secondstep=INT_MAX;
        if(i>1){
        secondstep=prev2+abs(heights[i]-heights[i-2]);
        }
        int current=min(firststep,secondstep);
        prev2=prev1;
        prev1=current;
    }
    return prev1;
}
