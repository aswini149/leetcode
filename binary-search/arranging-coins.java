class Solution {
    public int arrangeCoins(int n) {
        int i = 0;
        int j = 0;
        while (n>=j+1) {
            i++;
            if (n > j) {
                j = i;
                n = n-j;
            }
        }
        return i;
    }
}