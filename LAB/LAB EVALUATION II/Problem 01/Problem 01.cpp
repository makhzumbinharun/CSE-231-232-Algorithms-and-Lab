#include <bits/stdc++.h>
using namespace std;

int knapsack(int weight[], int value[], int n, int capacity){
    int dp[n + 1][capacity + 1] = {0};

    for(int i = 1; i <= n; i++){
        for(int w = 1; w <= capacity; w++){
            if(weight[i - 1] <= w){
                dp[i][w] = max(
                    value[i - 1] + dp[i - 1][w - weight[i - 1]],
                    dp[i - 1][w]
                );
            }
            else{
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main(){
    int n, capacity;

    cin >> n >> capacity;

    int weight[n], value[n];

    for(int i = 0; i < n; i++){
        cin >> weight[i] >> value[i];
    }

    cout << knapsack(weight, value, n, capacity) << endl;

    return 0;
}
