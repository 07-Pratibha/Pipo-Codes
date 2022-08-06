class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
        vector<vector<int>> ret;
            
            for(int i=0; i<items1.size(); i++) {
                bool flag1 = 1;
                int temp = items1[i][0];
                for(int j=0; j<items2.size(); j++) {
                    if(temp == items2[j][0]) {
                        flag1 = 0;
                        ret.push_back({temp,items1[i][1] + items2[j][1]});
                        items2[j][0] = 0;
                        items2[j][1] = 0;
                        break;
                    }
                }
                if(flag1) 
                    ret.push_back({temp, items1[i][1]});
            }
   
            for(int l=0; l<items2.size(); l++) {
                if(items2[l][0])
                    ret.push_back({items2[l][0], items2[l][1]});
 
            }

        sort(ret.begin(), ret.end());
        return ret;
    }
};