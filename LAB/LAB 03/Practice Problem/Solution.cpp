#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el '\n'
#define sp << " "
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
const ll MOD = 1e9+7, INF = 4e18;
#define f0(N) for(int i = 0; i < N; i++)
#define f1(n) for(int i = 1; i < n; i++)

int main(){
    fast
    int N;
    cin >> N;
    vector<int>arr;
    f0(N){
        int x;
        cin >> x;
        arr.pb(x);
    }
    
    for(int i = 0; i < N - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < N; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        
        if(minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
    
    f0(N){
        cout << arr[i] sp;
    }
    
    return 0;
}
