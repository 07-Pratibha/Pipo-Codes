 class Solution {
public:
    
    int climbStairs(int n) {
	    if(n<1) 
            return 0;
        
        int a[100];
        
        a[0]=1;
        a[1]=2;
        
        for(int i=2;i<n;i++)
            a[i]=a[i-1]+a[i-2];
        
        return a[n-1];
    }
};

// class Solution {
// public:
//     int climbStairs(int n) {
//         int ans[60];
        
//         ans[0] = 0;
//         ans[1] = 1;
//         ans[2] = 2;
//         for(int i=3; i<=n; i++) {
//             //ex i = 4, so either it will climb (1 stair + climb (4-1) remaining)
//             //or it will climb (2 stair + climb (4-2) remaining)
//             //because all possible ways we have to tell
//             ans[i] = ans[i-1] + ans[i-2];
//         }
//         return ans[n];
//     }
// };

//memoisation and recursive solution give runtime error;

// int climbStairs_helper(int n, int *ans) {
            
//     //base case
//     if(n == 0)
//         return 0;
    
//     if(ans[n] != -1)
//         return ans[n];

//     int a = climbStairs_helper(n-1, ans); //when you take only 1 step first
//     int b = climbStairs_helper(n-2, ans); //when you take only 2 steps first
    
//     ans[n] = a+b;
//     return a+b;

// }

// class Solution {
// public:
//     int climbStairs(int n) {
//         int *ans = new int[n+1];
//         for(int i=0; i<=n; i++) {
//             ans[i] = -1;
//         }
//         int res = climbStairs_helper(n, ans);
//         return res;
//     }

// };
