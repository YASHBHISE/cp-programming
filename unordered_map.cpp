#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){

  int arr[] ={10,5,10,15,10,5};
  int n= sizeof(arr) / sizeof(arr[0]);

  unordered_map<int,int>map;

  for(int i=0; i<n; i++){
    map[arr[i]]++;
  }

for(auto &x: map){
    cout<<x.first<<" "<<x.second<<endl;
}
  


    return 0;

}