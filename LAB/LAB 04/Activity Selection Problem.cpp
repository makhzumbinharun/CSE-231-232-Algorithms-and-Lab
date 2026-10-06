#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el << '\n'
#define sp << " "
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
const ll MOD = 1e9+7, INF = 4e18;
#define f(x) for(auto i:x)
#define f0(N) for(int i = 0; i < N; i++)
#define f1(n) for(int i = 1; i < n; i++)


struct activity{
    int start;
    int finish;
};

bool compare(activity a, activity b){
    return a.finish < b.finish;
}

int main(){
    fast
    int n;
    cout << "enter number of activities: "el;
    cin >> n;
    activity arr[n];
    cout << "Enter start and finish times: "el;
    f0(n){
        cin >> arr[i].start >> arr[i].finish;
    }
    sort(arr, arr + n, compare);
    f0(n){
        cout << arr[i].start sp << arr[i].finish el;
    }
    cout << "Selected Activities"el;
    int lastfinish = arr[0].finish;
    
    cout << "{" << arr[0].start << "," << arr[0].finish << "}";
    f1(n){
        if(arr[i].start >= lastfinish){
            cout << "{" << arr[i].start << "," << arr[i].finish << "}";
            lastfinish = arr[i].finish;
        }
    }
    return 0;
}
