#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int largestelement(int arr[],int n){

    int large=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }

    return large;
}



int main(){

    int n;
    cout<<"enter the number";
    cin>>n;
     int arr[n];
     cout<<"enter the array"<<endl;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
  int large = largestelement(arr,n);
  cout << "The smallest element in the array is: " << large << endl;


    return 0;
}