
#include <bits/stdc++.h>
using namespace std;

int knapsack(int weight[], int value[], int n, int capacity){
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

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

    cout << "Enter the Number of Items: ";
    cin >> n;

    int weight[n], value[n];

    cout << "Enter Weight and Value of each item:\n";

    for(int i = 0; i < n; i++){
        cin >> weight[i] >> value[i];
    }

    cout << "Enter Knapsack Capacity: ";
    cin >> capacity;

    int maxValue = knapsack(weight, value, n, capacity);

    cout << "Maximum Value: " << maxValue << "\n";

    return 0;
}
