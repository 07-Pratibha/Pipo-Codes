class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int sum = 0;
        
        //sum of primary diagonal first
        for(int i=0; i<n; i++) {
            sum += mat[i][i];
        }
        
        //sum of secondary diagonal
        for(int i=0; i<n; i++) {
            sum += mat[i][n-i-1];
        }
        
        //if n is even, no repetition of middle element
        if(n%2 == 0)
            return sum;
        else
            return sum - mat[(n-1)/2][(n-1)/2];
    }
};