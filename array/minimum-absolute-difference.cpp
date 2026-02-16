class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        int minDiff = INT_MAX;

        sort(arr.begin(), arr.end());

        // Find minimum absolute difference
        for (int i = 0; i < arr.size() - 1; i++) {
            minDiff = min(minDiff, arr[i + 1] - arr[i]);
        }

        cout << "min " << minDiff << endl;

        // Collect all pairs with minimum difference
        for (int i = 0; i < arr.size() - 1; i++) {
            if (minDiff == arr[i + 1] - arr[i]) {
                result.push_back({arr[i], arr[i + 1]});
            }
        }

        return result;
    }
};