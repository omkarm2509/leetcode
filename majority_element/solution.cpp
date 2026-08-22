class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int freq=0,answer=0;
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                answer=nums[i];
            }
            if(answer==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
            
        }
    return answer;
    }
};