#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    fast
    int n;
    cout << "Enter Length: ";
    cin >> n;
    int price[n];
    
    cout << "Enter Price for Each Length: " << "\n";
    for(int i = 0; i < n; i++){
        cin >> price[i];
    }
    
    int dp[n + 1];
    dp[0] = 0;
    
    for(int i = 1; i <= n; i++){
        int maxprofit = 0;
        for(int j = 1; j <= i; j++){
            maxprofit = max(maxprofit, price[j - 1] + dp[i - j]);
        }
        dp[i] = maxprofit;
    }
    
    
    cout << "Max Profit: ";
    
    for(int i = 0; i <= n; i++){
        cout << "For Length " << i << " is: " << dp[i] << "\n";
    }
    
return 0;
}

/*
Sample Input:
4
2
5
5
7
Output:
Enter Length: Enter Price for Each Length: 
Max Profit: For Length 0 is: 0
For Length 1 is: 2
For Length 2 is: 5
For Length 3 is: 7
For Length 4 is: 10
*/
