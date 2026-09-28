#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define el '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define f0(n) for(int i = 0; i < n; i++)


void heapify(int arr[], int n, int i){
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if(left < n && arr[left] < arr[smallest]){
        smallest = left;
    }
    if(right < n && arr[right] < arr[smallest]){
        smallest = right;
    }
    if(smallest != i){
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
    
}

void heapsort(int arr[], int n){
    for(int i = n / 2 - 1; i >=  0; i--){
        heapify(arr, n, i);
    }
    for(int i = n - 1; i > 0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i , 0);
    }
}

int main(){
    fast
    int N;
    cin >> N;
    
    vector<int>arr;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        arr.pb(x);
    }
    
    heapsort(arr.data(), N);
    
    f0(N){
        cout << arr[i] << " ";
    }
    
    return 0;
}
