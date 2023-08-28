#include<bits/stdc++.h>
int numberOfNodes(int N){
    // Write your code here.
   if(N<=2){
       return N;
   }
   int ans=pow(2,N-1);
   return ans;
}
