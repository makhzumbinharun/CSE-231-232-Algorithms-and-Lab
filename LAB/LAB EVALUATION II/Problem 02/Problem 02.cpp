
#include <bits/stdc++.h>
using namespace std;

int knapsack(int time[], int marks[], int n, int T){
    int dp[n + 1][T + 1] = {0};

    for(int i = 1; i <= n; i++){
        for(int t = 1; t <= T; t++){
            if(time[i - 1] <= t){
                dp[i][t] = max(
                    marks[i - 1] + dp[i - 1][t - time[i - 1]],
                    dp[i - 1][t]
                );
            }
            else{
                dp[i][t] = dp[i - 1][t];
            }
        }
    }

    return dp[n][T];
}

int main(){
    int n, T;
    cin >> n >> T;

    int time[n], marks[n];

    for(int i = 0; i < n; i++){
        cin >> time[i] >> marks[i];
    }

    cout << knapsack(time, marks, n, T) << endl;

    return 0;
}
