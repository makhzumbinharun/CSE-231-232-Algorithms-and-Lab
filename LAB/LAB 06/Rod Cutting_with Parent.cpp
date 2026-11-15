
#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    fast

    int n;
    cout << "Enter Length: ";
    cin >> n;

    int price[n];

    cout << "Enter Price for Each Length:\n";
    for(int i = 0; i < n; i++){
        cin >> price[i];
    }

    int dp[n + 1];
    int parent[n + 1];

    dp[0] = 0;
    parent[0] = 0;

    for(int i = 1; i <= n; i++){
        int maxprofit = 0;

        for(int j = 1; j <= i; j++){
            if(price[j - 1] + dp[i - j] > maxprofit){
                maxprofit = price[j - 1] + dp[i - j];
                parent[i] = j;
            }
        }

        dp[i] = maxprofit;
    }

    cout << "\nMax Profit:\n";

    for(int i = 0; i <= n; i++){
        cout << "For Length " << i << " is: " << dp[i] << "\n";
    }

    cout << "\nMaximum Profit: " << dp[n] << "\n";

    cout << "Selected Cuts: ";

    int len = n;

    while(len > 0){
        cout << parent[len] << " ";
        len -= parent[len];
    }

    cout << "\n";

    return 0;
}
