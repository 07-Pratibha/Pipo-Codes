//recursive approach
// class Solution {
// public:
//     int fib(int n) {
//         //recursive solution
//         //base case
//         if(n == 0 || n == 1)
//             return n;
        
//         
//         int ans = fib(n-1) + fib(n-2);
//         return ans;
//     }
// };

//memoisation 
int fib_helper(int n, int *ans) {
    //base case
    if(n == 0 || n == 1)
        return n;
    
    //search if ans array already contains our required answer
    //that means hmne uske lia already kaam kia hua hai
    if(ans[n] != -1)
        return ans[n];
    
    //recursive call
    int res = fib_helper(n-1, ans) + fib_helper(n-2, ans);
    //store the answer before returning 
    ans[n] = res;
    return ans[n];
    
}

class Solution {
public:
    int fib(int n) {
        int *ans = new int[n+1];
        for(int i=0; i<=n; i++) {
            ans[i] = -1;
        }     
        int answer = fib_helper(n, ans);
        return answer;
    }
};

//dynamic programming
// class Solution {
// public:
//     int fib(int n) {
//         
//         int *arr = new int[n+1];
//         arr[0] = 0;
//         arr[1] = 1;
        
//         for(int i=2; i<=n; i++){
//             arr[i] = arr[i-1] + arr[i-2];
//         }
//         return arr[n];
//     }
// };




























