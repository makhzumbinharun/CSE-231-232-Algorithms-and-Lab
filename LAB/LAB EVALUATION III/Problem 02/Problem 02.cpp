#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter number of cables: ";
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    cout << "Enter cable lengths: ";

    for(int i = 0; i < N; i++) {
        int length;
        cin >> length;
        pq.push(length);
    }

    int totalCost = 0;

    while(pq.size() > 1) {
        int first = pq.top();
        pq.pop();

        int second = pq.top();
        pq.pop();

        int cost = first + second;

        totalCost += cost;

        pq.push(cost);
    }

    cout << "Minimum Total Cost: " << totalCost;

    return 0;
}
