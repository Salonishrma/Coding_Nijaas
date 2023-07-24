#include<bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.
	 int n=str.size();
    if (n==0){
      return str;
    }
    stack<string>s1;
    string ans;
    for(int i=0;i<n;i++){
      string word;
      if(str[i]==' ')
      continue;
      while( i<n && str[i]!=' '){
        word+=str[i];
        i++;
      }
      s1.push(word);
    }
    while(!s1.empty()){
     ans+=s1.top();
     s1.pop();
     if(!s1.empty()){
       ans+=" ";
     }
    }
    return ans;
}
