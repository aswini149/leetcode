class Solution {
    public boolean searchMatrix(int[][] arr, int target) {
        int rows = arr.length;
        int cols = arr[0].length;

        int right = ((rows * cols) - 1);
        int left = 0;

        while (left <= right) {
            int mid = left + ((right -left) / 2);
            System.out.println("mid " + mid);

            int tempRow = mid / cols;
            int tempCol = mid % cols;

            int element = arr[tempRow][tempCol];
            System.out.println("element " + element);

            if (element == target) {
                return true;
            } else if (element > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
}