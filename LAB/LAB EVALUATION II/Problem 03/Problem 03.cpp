// Longest Increasing Subsequence (LIS)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N], dp[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
        dp[i] = 1;
    }

    int ans = 1;

    for(int i = 1; i < N; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        ans = max(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}




/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int arr[N];
	for(int i = 0; i < N; i++){
	    cin >> arr[i];
	}
	int count = 0;
	for(int i = 0; i < N; i++){
	    if(arr[i+1] > arr[i]){
	        count++;
	        //cout << arr[i+1] << "→";
	    }
	}
	cout << count << endl;

}
**/
