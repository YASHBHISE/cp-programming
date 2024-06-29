// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//      }

//     //  sort(arr.begin(),arr.end());
//      sort(arr,arr+n);

//      cout<<arr[0];


//     return 0;
// }




// int smallestelement();
// int smallestelementl(int arr[], int n){
//     int min = arr[0];

//     for(int i=0; i<n;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     return min;
// }

// int main(){

//     int n;
//     cout<<"enter the number";
//     cin>>n;
//      int arr[n];
//      cout<<"enter the array"<<endl;
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//      }

//     int min = smallestelement(arr,n);



//     return 0;

// }


#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
int smallestelementl(int arr[], int n){
    int min = arr[0];

    for(int i=0; i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main() {
  int n;
    cout<<"enter the number";
    cin>>n;
     int arr[n];
     cout<<"enter the array"<<endl;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
  int min = smallestelementl(arr,n);
  cout << "The smallest element in the array is: " << min << endl;
 
  
  
}