#include<bits/stdc++.h>
string commonPrefix(vector<string>& arr,int n){
	//Write your code here
	if(n==0){
		return 0;
	}
	string ans=arr[0];
	for(int i=1;i<n;i++){
		while(arr[i].find(ans)!=0){
			ans=ans.substr(0,ans.length()-1);
		}
		if(ans.empty()){
			return "-1";
		}
	}
	return ans;
}
