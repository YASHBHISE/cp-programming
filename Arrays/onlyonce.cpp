#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// int getsingleelement(int arr[],int n){
//     int maxi=arr[0];
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//     }

//     vector<int> hash(maxi+1,0);
//     for(int i=0; i<n; i++){
//         hash[arr[i]]++;
//     }

//     for(int i=0;i<n;i++){
//         if(hash[arr[i]]==1){
//             return arr[i];
//         }
//     }
//     return -1;
// }

void getsingleelement(int arr[],int n){

    map<int,int>map;

    for(int i=0;i<n;i++){
        map[arr[i]]++;

    }
    for(int i=0;i<n;i++){
        if(map[arr[i]]==1){
            cout << "The single element is: " << arr[i] << endl;
        }
    }

}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];  

    }
//    for(int i=0;i<n;i++){
//     int num=arr[i];
//     int cnt=0;
//       for(int j=0;j<n;j++){
//         if(arr[j]==num){
//             cnt++;
//         }

//       }
//       if(cnt==1) cout<<num<<" ";
//    }
     
    //  int ans = getsingleelement(arr,n);
    //  cout<<ans<<" ";
    getsingleelement(arr,n);
    return 0;
}