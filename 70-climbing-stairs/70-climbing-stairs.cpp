// memoisation and recursive solution give runtime error;

int climbStairs_helper(int n, int *ans) {
            
    //base case
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;
    
    if(ans[n] != -1)
        return ans[n];

    int a = climbStairs_helper(n-1, ans); //when you take only 1 step first
    int b = climbStairs_helper(n-2, ans); //when you take only 2 steps first
    
    ans[n] = a+b;
    return ans[n];

}

class Solution {
public:
    int climbStairs(int n) {
        int *ans = new int[n+1];
        for(int i=0; i<=n; i++) {
            ans[i] = -1;
        }
        int res = climbStairs_helper(n, ans);
        return res;
    }

};
