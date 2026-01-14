class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            int minHeight = std::min(height[left], height[right]);
            int total = ((right - left) * minHeight);
            //cout << "total " << total << endl;
            //cout << "right " << right << endl;
            //cout << "left " << left << endl;
            maxWater = std::max(maxWater, total);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};