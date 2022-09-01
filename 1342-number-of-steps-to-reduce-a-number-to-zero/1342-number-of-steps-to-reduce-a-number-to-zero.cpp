/*compared this prob to MinStepsToOne problem, but 
there are no overlapping subproblems in this,
every call will be unique, MinStepsToOne me choice 
thi ki aap kitne operatios peform kr skte ho, isme 
if else wala scene tha*/

/*dp gives runtime error, unnecessarily filling the array*/


int numberOfSteps_helper(int num, int *ans) {
    if(num == 0)
        return 0;
    
    if(ans[num] != -1) 
        return ans[num];
    
    int x = INT_MAX;
    int y = INT_MAX;
    
    if(num%2 == 0) {
        x = numberOfSteps_helper(num/2, ans);
        ans[num] = 1 + x;
    }
    else {
        y = numberOfSteps_helper(num-1, ans);
        ans[num] = 1 + y;
    }
    return ans[num];
}
class Solution {
public:
    int numberOfSteps(int num) {
        int *ans = new int[num+1];
        for(int i=0; i<=num; i++) {
            ans[i] = -1;
        }
        int res = numberOfSteps_helper(num, ans);
        return res;
    }
};

// class Solution {
// public:
//     int numberOfSteps(int num) {
        
//         int steps = 0;
        
//         while(num != 0) {
//             if(num%2 == 0) {
//                 num = num/2;
//             }
//             else
//                 num = num - 1;
            
//             steps++;
//         }
//         return steps;
//     }
// };