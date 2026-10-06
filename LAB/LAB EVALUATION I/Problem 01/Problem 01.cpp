#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define el << '\n'
#define sp << " "
#define f0(n) for(int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
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
    f0(N){
        int x;
        cin >> x;
        arr.pb(x);
    }
    
    heapsort(arr.data(), N);
    
    for(int i = 0; i < N; i++){
        cout << arr[i] sp;
    }
    
    return 0;
}
