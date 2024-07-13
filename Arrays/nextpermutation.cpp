#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> A){

    int n=A.size();
    // Step 1: Find the break point:
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            ind=i;
            break;
        }
    }

    if (ind == -1) {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for(int i=n-1; i>=0;i--){
        if(A[i]>A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }
   reverse(A.begin()+ind+1,A.end());
 return A;
}


int main (){

    vector<int> A ;
    A.push_back(1);
    A.push_back(3);
    A.push_back(2);
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (int it : ans) {
        cout << it << " ";
    }
    cout << "]n";
    return 0;

    
}