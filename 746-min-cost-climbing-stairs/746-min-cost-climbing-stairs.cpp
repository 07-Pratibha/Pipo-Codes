class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int *dp = new int[n+2];
        dp[n+1] = 0;
        dp[n] = 0;
        // dp[1000] = 0;
        
        for(int i=n-1; i>=0; i--) {
            dp[i] = min(dp[i+1], dp[i+2]) + cost[i];
        }
        
        return min(dp[0],dp[1]);
        
    
//     if(i >= cost.size())
//         return 0;
        
//     if(ans[i] != -1)
//         return ans[i];
 
//     int m = minCostClimbingStairs_helper(cost, i+1, ans); //when we take 1 step
//     int n = minCostClimbingStairs_helper(cost, i+2, ans); //when we take 2 step
        
//     ans[i] = min(m, n) + cost[i];
    
//     return ans[i];
   }
};
    
    
// //recursive code wirh memoisation 
// class Solution {
// public:
//     int minCostClimbingStairs_helper(vector<int>& cost, int i, int *ans) {
//     if(i >= cost.size())
//         return 0;
        
//     if(ans[i] != -1)
//         return ans[i];
 
//     int m = minCostClimbingStairs_helper(cost, i+1, ans); //when we take 1 step
//     int n = minCostClimbingStairs_helper(cost, i+2, ans); //when we take 2 step
        
//     ans[i] = min(m, n) + cost[i];
    
//     return ans[i];
// }
    
//     int minCostClimbingStairs(vector<int>& cost) {
        
//         int i; //i represents the staicase number we are on presently 
//         int *ans = new int[cost.size() + 1];
        
//         for(int i=0; i<=cost.size(); i++) {
//             ans[i] = -1;
//         }
//         int a = minCostClimbingStairs_helper(cost, 0, ans); //when we start on index 0
//         int b = minCostClimbingStairs_helper(cost, 1, ans); //when we start on index 1
        
//         return min(a,b);        
//     }
// };