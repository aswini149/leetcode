class Solution {
    public List<Integer> spiralOrder(int[][] mat) {
        int left = 0;
        int right = mat[0].length;
        int top = 0;
        int bottom = mat.length;
        System.out.println("right " + right);
        System.out.println("bottom " + bottom);
        List<Integer> list = new ArrayList<>();
        while (left < right && top < bottom) {
            for (int i = left; i < right; i++) {
                System.out.println("Adding left to right " );    
                list.add(mat[top][i]);
            }
            top++;
            System.out.println("List " + list.toString());
            for (int i = top; i < bottom; i++) {
                System.out.println("Adding top to bottom " );    
                list.add(mat[i][right-1]);
            }
            right--;            
            //System.out.println("left " + left);
            System.out.println("List " + list.toString());
            if (top < bottom) {
                for (int i = right-1; i >= left; i--) {
                    System.out.println("Adding rigth to left " + i + " " + right);    
                    list.add(mat[bottom-1][i]);
                }
                bottom--;
                System.out.println("List " + list.toString());
            }
            
            if (left < right) {
                for (int i = bottom - 1; i >= top; i--) {
                    System.out.println("Adding bottom to top " );
                    list.add(mat[i][left]);
                }
                left++;
                System.out.println("List " + list.toString());
            }
            
        }
        return list;
    }
}