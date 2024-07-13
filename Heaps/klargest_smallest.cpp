#include<bits/stdc++.h>
using namespace std;

/*
  you need priority queue find max element and small element 

  // for max heap : syntax ......
  priority_queue<int>pq;

  // for min heap syntax:
  priority_queue<int,vector<int>, greater<int>>pq;




*/
void largest_element(int arr[],int n){
    // store small to large and at the top element is large
    priority_queue<int>pq;
    //int i=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
       // i++;
    }

    int f=2; // k-1
    
    while(f>0){
        pq.pop();
        f--;
    }

    cout<<"top element is :"<<pq.top()<<endl;

}

void smallest_element(int arr[],int n){

    priority_queue<int,vector<int>, greater<int> >pq;

    //int i=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
       // i++;
    }

    cout<<"top element is :"<<pq.top()<<endl;
}



int main(){
     
     int n;
     cin>>n;

     int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }


    largest_element(arr,n);
    smallest_element(arr,n);



    return 0;

}