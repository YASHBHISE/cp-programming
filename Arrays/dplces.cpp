#include<bits/stdc++.h>
#include<sstream>
using namespace std;

vector<int> input_array_size_not_given(){
    vector<int>arr;

    string input;
    getline(cin,input);
    stringstream ss(input);
    int num;

    while (ss>>num){
        arr.push_back(num);
    }
    return arr;
}

// right shift ke liye 
void solve(vector<int>& arr,int n,int k){
   if(n==0) return;
   k=k%n;
   if(k>n) return;

   vector<int>newarr;
   for(int i=n-k;i<n;i++){
    newarr.push_back(arr[i]);
   }
   for(int i=0;i<n-k;i++){
    newarr.push_back(arr[i]);
   }
   for(int i=0;i<=n;i++){
    arr[i]=newarr[i];
   }
   for(int newnum: arr){
        cout<<newnum<<" ";
    }


}

// left rotate input: {1, 2, 3, 4, 5, 6, 7}
//  output: 3 4 5 6 7 1 2
void leftsolve(vector<int>& arr,int n,int k){
if(n==0) return;
k=k%n;
if(k>n) return;
 int temp[k];
 //starting ke liye element store karo
for(int i=0;i<k;i++){
    temp[i]=arr[i];
}

// ab karo array me shifting i=0 lekar i=n-k

for(int i=0;i<n-k;i++){
    arr[i]=arr[i+k];
}
// temp wale hai wo last me daal do 
for(int i=n-k;i<n;i++){
    arr[i]=temp[i-n+k];
}

for(int num: arr){
         cout<<num<<" ";
     }


}


int main(){

 vector<int> arr = input_array_size_not_given();
   //vector<int> arr;
   //int num;
//    while(cin>>num){
//     arr.push_back(num);
//     if(cin.get()=='\n') break;
//    }
    int k;
    cin>>k;
    solve(arr,arr.size(),k);
    cout<<endl;

    leftsolve(arr,arr.size(),j);



    return 0;

}