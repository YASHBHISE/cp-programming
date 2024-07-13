#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                
            }
        }
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(11);

    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}