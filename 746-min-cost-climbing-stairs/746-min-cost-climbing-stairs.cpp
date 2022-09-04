

class Solution {
public:
    int minCostClimbingStairs_helper(vector<int>& cost, int i, int *ans) {
    if(i >= cost.size())
        return 0;
        
    if(ans[i] != -1)
        return ans[i];
 
    int m = minCostClimbingStairs_helper(cost, i+1, ans);
    int n = minCostClimbingStairs_helper(cost, i+2, ans);
        
    ans[i] = min(m, n) + cost[i];
    
    return ans[i];
}
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int i;
        int *ans = new int[cost.size() + 1];
        
        for(int i=0; i<=cost.size(); i++) {
            ans[i] = -1;
        }
        int a = minCostClimbingStairs_helper(cost, 0, ans);
        int b = minCostClimbingStairs_helper(cost, 1, ans);
        
        return min(a,b);        
    }
};