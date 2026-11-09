#include <bits/stdc++.h>
using namespace std;

int knapsack(int weight[], int value[], int n, int capacity){
    int dp[n + 1][capacity];
    for(int i = 0; i <= n; i++){
        for(int w = 0; w <= capacity; w++){
            if(i == 0 || w == 0){
                dp[i][w] = 0;
            }
            else if(weight[i - 1] <= w){
                dp[i][w] = max(value[i - 1] + dp[i - 1] [w - weight[i - 1]], dp[i - 1][w]);
            }
            else{
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
    
    cout << "Picked Items" << endl;
    int w = capacity;
    for(int i = n; i >0 && w>0; i--){
        if(dp[i][w] != dp [i - 1][w]){
            cout << "Item" << i << endl;
            w -= weight[i-1];
        }
    }
}

int main() {
	int n, capacity;
	cout << "Enter the Number of Items: ";
	cin >> n;
	
	int weight[n], value [n];
	cout << "Enter Weight and Value of each items";
	for(int i = 0; i < n; i++){
	    cin >> weight[i] >> value[i];
	}
	cout << "Enter Knapsack Capacity: ";
	cin >> capacity;
	
	int maxValue = knapsack(weight, value, n, capacity);
	cout << "Maximum  Value: " << maxValue << "\n";
	
return 0;
}
