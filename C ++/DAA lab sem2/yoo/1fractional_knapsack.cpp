//greedy : fractional kanpsack
//value-to-weight ratio
//Time Complexity : O(nlog n)

#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    double value, weight;
};

bool compare(Item a, Item b) {
    return (a.value / a.weight) > (b.value / b.weight);
}

double fractionalKnapsack(int W, Item items[], int n) {     

    sort(items, items + n, compare);

    double totalValue = 0.0;    
    int remainingCapacity = W;  

        for (int i = 0; i < n; i++) {

        if (items[i].weight <= remainingCapacity) {
            
            totalValue += items[i].value;
            remainingCapacity -= items[i].weight;
        }
        else {
            totalValue += items[i].value * (remainingCapacity / items[i].weight);
            break; 
        }
    }

    return totalValue;  
}


int main() {
    int n, W;   
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter capacity of knapsack: ";
    cin >> W;

    Item items[n];

    cout << "value and weight of each item : \n";
    for (int i = 0; i < n; i++) {
        cin >> items[i].value >> items[i].weight;
    }

    double maxValue = fractionalKnapsack(W, items, n);
    cout << "\nMaximum value in the knapsack: " << maxValue << endl;

    return 0;
}

//line9: Structure to represent an item which stores : value(profit) and weight
//line13: Comparator function to sort items by value-to-weight ratio
//line17: fractionalKnapsack Function: to calculate the maximum value of the knapsack
//line19: W = capacity , items[] = array to store items , n = no. of items
//21: Total value of the knapsack for final profit
//22: current available space in knapsack
//24: looping through sorted items
//28: Take the full item
//32: Take fraction of the item , calculated using the ratio
//33: Knapsack is full
//37: maximum value obtained
//42: no.of items , weight
//48: Array of items
//50: Inputting the items
 //55: Calculating maximum profit