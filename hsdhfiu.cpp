#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int arr[26];
int main(){
	int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    
    int count=0;
    for(int i=0; i<s.length();i++){
        if(count==0 || s[i]==s[i-1]){
            count++;
        }
        else{
            count=1;

        }

        if(count==k){
            count=0;
            arr[s[i]-'a']++;
        }
    }

    int ans=0;
    for(int i=0; i<26; i++){
        ans=max(ans,arr[i]);
    }

    cout<<ans<<endl;
   


}