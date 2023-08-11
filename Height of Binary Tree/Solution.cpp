#include <bits/stdc++.h> 
int fun(vector <long long int>&num){
    long long n=num.size();
    int prev1=num[0];
    int prev2=0;
    for(int i=1;i<n;i++){
    int take=num[i];
        if(i>1)
        take+=prev2;
        int nontake=0+prev1;
        int curri=max(take,nontake);
        prev2=prev1;
        prev1=curri;
    }
    return prev1;
}
long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    vector<long long int>temp1;
    vector<long long int>temp2;
    long long  n= valueInHouse.size();
    if (n==1)
    return valueInHouse[0];
    for(int i=0;i<n;i++){
        //we have 2 option either leave first index and check rest of indexs 
        // or take all index except last
        // now check max of adjacents 
        if(i!=0){
          temp1.push_back( valueInHouse[i]);//leaving first index
        }
        if(i!=n-1){
            temp2.push_back( valueInHouse[i]); //leaving last index
        }
    }
    return max(fun(temp1),fun(temp2));
}