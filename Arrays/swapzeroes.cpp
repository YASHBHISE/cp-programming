#include <bits/stdc++.h>
using namespace std;


// void swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            //swap(a[i], a[j]);
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    return a;
}



int main()
{
    int n;
    cin>>n;
    int arr1[n];
    vector<int>arr;

   
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        arr.push_back(arr1[i]);

    }
    vector<int>ans= moveZeros(n,arr);
   for(int i=0;i<=n;i++){
        cout<<ans[i];
    }

    
    return 0;
}