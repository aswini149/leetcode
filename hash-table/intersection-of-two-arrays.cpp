class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> arr1Set;
        unordered_set<int> result;

        for (int tempNum : arr1) {
            arr1Set.insert(tempNum);
        }

        for (int tempNum : arr2) {
            if (arr1Set.contains(tempNum)) {
                result.insert(tempNum);
            }
        }
        vector<int> arrRes(result.size());
        int i = 0;
        for (int tempNum : result) {
            arrRes[i] = tempNum;
            i++;
        }
        return arrRes;
    }
};