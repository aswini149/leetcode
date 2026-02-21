class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int maxCount = 0;
        //for (int i = 1; i < arr.size() - 1; i++) {
        int i = 1;
        while (i < arr.size()-1) {
            if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) {

                //cout << " i is " << arr[i] << endl;

                int rightCount = 0;
                int k = i;
                while (k < arr.size() - 1) {
                    if (arr[k] > arr[k+1]) {
                        rightCount++;
                    } else {
                        break;
                    }
                    k++;
                }
                int leftCount = 0;
                int l = i;
                while (l > 0) {
                    if (arr[l] > arr[l-1]) {
                        leftCount++;
                    } else {
                        break;
                    }
                    l--;
                }
                //cout << " leftCount is " << leftCount << endl;
                //cout << " rightCount is " << rightCount << endl;
                maxCount = max(maxCount, leftCount + rightCount);
                i = k;
            } else {
                i++;
            }
        }
        return maxCount == 0 ? 0 : maxCount + 1;;
    }
};