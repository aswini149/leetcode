class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        //boolean canPlant = false;
        //boolean isEvenOccupied = false;
        for (int i = 0; i < flowerbed.length; i++) {
            if (flowerbed[i] == 0) {
                boolean isRightEmpty = false;
                boolean isLeftEmpty = false;

                if (i == 0 || flowerbed[i-1] == 0) {
                    isLeftEmpty = true;
                }

                if (i == flowerbed.length - 1 || flowerbed[i+1] == 0) {
                    isRightEmpty = true;
                }

                if (isLeftEmpty && isRightEmpty) {
                    flowerbed[i] = 1;
                    n--;
                    if (n == 0) {
                        return true;
                    }
                }
            }
        }
        if (n == 0) {
            return true;
        }

        return false;
    }
}