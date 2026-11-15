
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool compare(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    fast

    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    vector<pair<int,int>> arr(n);

    cout << "Enter start and finish times:\n";

    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end(), compare);

    cout << "\nSorted Activities:\n";

    for(int i = 0; i < n; i++){
        cout << "{" << arr[i].first << "," << arr[i].second << "}\n";
    }

    cout << "\nSelected Activities:\n";

    if(n == 0){
        cout << "No activities available.\n";
        return 0;
    }

    int lastfinish = arr[0].second;
    int count = 1;

    cout << "{" << arr[0].first << "," << arr[0].second << "}\n";

    for(int i = 1; i < n; i++){
        if(arr[i].first >= lastfinish){
            cout << "{" << arr[i].first << "," << arr[i].second << "}\n";

            lastfinish = arr[i].second;
            count++;
        }
    }

    cout << "Maximum Activities: " << count << "\n";

    return 0;
}
