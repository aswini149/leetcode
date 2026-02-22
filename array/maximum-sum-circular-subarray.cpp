class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int currentMaxSum = arr[0];
        int maxSum = arr[0];

        int currentMinSum = arr[0];
        int minSum = arr[0];

        int totalSum = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            currentMaxSum = max(arr[i], arr[i] + currentMaxSum);
            maxSum = max(maxSum, currentMaxSum);

            currentMinSum = min(arr[i], currentMinSum + arr[i]);
            minSum = min(minSum, currentMinSum);

            totalSum += arr[i];
        }

        int normalSum = maxSum;
        int circularSum = totalSum - minSum;

        if (minSum == totalSum) {
            return normalSum;
        }
        return max(normalSum, circularSum);
    }
};