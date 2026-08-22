class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currect_sum=0,maxsum=INT_MIN;
        for(int var:nums){
            currect_sum+=var;
            maxsum=max(currect_sum,maxsum);
            if (currect_sum<0){
                currect_sum=0;
            }
           
        }
         return maxsum;
        
    }
};