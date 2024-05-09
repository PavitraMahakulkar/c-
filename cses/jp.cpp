#include <iostream>
#include <vector>
#include <queue>
#include <cmath> // For ceil function

using std::vector;
using std::priority_queue;
using std::cout;
using std::endl;

int totalCost(const vector<int>& arr) {
    priority_queue<int> minHeap(arr.begin(), arr.end());
    priority_queue<int> maxHeap(arr.begin(), arr.end());

    int totalCost = 0;

    while (minHeap.size() > 1 && maxHeap.size() > 1) {
        int minElement = minHeap.top();
        minHeap.pop();
        int maxElement = maxHeap.top();
        maxHeap.pop();

        int sum = minElement + maxElement;
        totalCost += std::ceil(static_cast<double>(sum) / (maxElement - minElement + 1));

        minHeap.push(sum);
        maxHeap.push(sum);
    }

    return totalCost;
}

int main() {
    vector<int> arr = {2, 3, 4, 5, 7};
    int cost = totalCost(arr);
    cout << "Total cost: " << cost << endl;
    return 0;
}
