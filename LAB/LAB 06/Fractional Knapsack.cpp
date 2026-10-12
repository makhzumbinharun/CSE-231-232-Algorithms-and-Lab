#include <bits/stdc++.h>
using namespace std;
struct Item{
  int value;
  int weight;
  double ratio;
};

bool compare(Item a, Item b){
    return a.ratio > b.ratio;
}

int main() {
	int n, capacity;
	cout << "Enter number of items: ";
	cin >> n;
	Item items[n];
	
	cout << "Enter weight and value of each items: ";
	for(int i = 0; i < n; i++){
	    cin >> items[i].weight >> items[i].value;
	}
	
	cin >> capacity;
	
	for(int i = 0; i < n; i++){
	    items[i].ratio = (double) items[i].value / items[i].weight;
	}
	
	sort(items, items + n, compare);
	
	double totalvalue = 0.0;
	for(int i = 0; i < n; i++){
	    if(items[i].weight <= capacity){
	        capacity -= items[i].weight;
	        totalvalue += items[i].value; 
	    }
	    else{
	        double fraction =  (double) capacity / items[i].weight;
	        totalvalue += items[i].value * fraction; 
	        break;
	    }
	}
	cout << "Total Values: " << totalvalue;
	
return 0;
}
