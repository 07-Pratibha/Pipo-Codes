class Solution {
public:
    int numberOfSteps(int num) {
        
//         int *arr = new int[num+1];
        
//         arr[0] = 0;
//         arr[1] = 1;
//         arr[2]= 2;
        
//         for(int i=3; i<=num; i++) {
//             if(i%2 == 0){
//                 arr[i] = arr[i/2] + 1;
//             }
//             else
//                 arr[i] = arr[i-1] + 1;
//         }
//         return arr[num
        int count=0;
        while(num!=0){
            if(num%2==0){
                num/=2;
            }else{
                num-=1;
            }
            
            count++;
        }
        
        return count;
    }
};