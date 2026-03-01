class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner = 0;
        int i = 0;
        vector<int> list;
        for (int f = 1; f <= n; f++ ) {
            list.push_back(f);
        }
        //System.out.println(list);

        while (list.size() > 1) {
            i = (i + k -1) % list.size(); 
            //System.out.println(" temp : " + i);
            list.erase(list.begin() + i); 
            //list.remove(i);
            //i = i + 1;
        }
        return list[0];
    }
};