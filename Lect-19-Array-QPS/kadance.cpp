#include <bits/stdc++.h>
using namespace std;

int maxCircularSum(const vector<int>& nums, int n) {
    int maxSum = INT_MIN;

    // Iterate through each possible starting point i
    for (int i = 0; i < n; i++) {
        int currentSum = 0;

        // First loop: sum the subarray starting from i to the end (i to n-1)
        for (int j1 = i; j1 < n; j1++) {
            currentSum += nums[j1];
            maxSum = max(maxSum, currentSum);  // Update the max sum
        }

        // Second loop: sum the subarray from start to i-1 (circular part)
        for (int j2 = 0; j2 < i; j2++) {
            currentSum += nums[j2];
            maxSum = max(maxSum, currentSum);  // Update the max sum
        }
    }

    return maxSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        cout << maxCircularSum(nums, n) << endl;
    }

    return 0;
}
