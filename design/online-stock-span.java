class StockSpanner {
    Stack<int[]> stack = new Stack<>();
    public StockSpanner() {
        
    }
    
    public int next(int price) {
        int count = 1;
        //Stack<Integer> stack = allPrices;

        while (!stack.isEmpty() && price >= stack.peek()[0]) {
            int temp = stack.pop()[1];
            count += temp;
        }
        stack.push(new int[]{price, count});
        //System.out.println("all the prices" + allPrices.toString());
        System.out.println("all the stock" + stack.toString());
        return count;
    }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */