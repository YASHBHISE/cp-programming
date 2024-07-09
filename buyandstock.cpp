#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int Arr[6] = {7, 1, 5, 3, 6, 4};

   vector<vector<long> > dp(n + 1, vector<long>(2, -1));

    // Base condition: When we have no stocks left, the profit is 0.
    dp[n][0] = dp[n][1] = 0;

    long profit;

    // Loop through the array in reverse order
    for (int ind = n - 1; ind >= 0; ind--) {
        for (int buy = 0; buy <= 1; buy++)  {
             if(buy){
                 profit=max(-Arr[ind]+dp[ind+1][0],0+dp[ind+1][1]);
               }
             else{
                profit=max(Arr[ind]+dp[ind+1][1],0+dp[ind+1][0]);
             }


            dp[ind][buy] = profit;
        }
    }

    // The maximum profit is stored in dp[0][0] after all calculations
   for(int ind = 1; ind <= n; ind++) {
        for (int buy = 0; buy <= 1; buy++) {
            cout<<dp[ind][buy];
        }
        cout<<endl;
   }

    return 0;
}