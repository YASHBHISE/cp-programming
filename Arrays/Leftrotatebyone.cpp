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
void solve(vector<int>& arr,int n){
    int temp = arr[0];
    for(int i=1; i<=n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int num: arr){
        cout<<num<<" ";
    }
}

int main(){

    vector<int> arr = input_array_size_not_given();
    
    solve(arr,arr.size());



    return 0;

}