#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int>arr(N);
    for(int i = 0; i < N; i++){
        int x;
        cin >> arr[i];
    }
    
    for(int i = 0; i < N; i++){
        int k = arr[i];
        int j = i - 1;
        
        
        while(j >= 0 && arr[j] > k){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
        
    }
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    
return 0;
}
