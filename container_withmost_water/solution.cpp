class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0,lp=0,rp=(height.size())-1,width,ht,currentwater;
        while(lp<rp){
            width=rp-lp;
            ht=min(height[lp],height[rp]);
            currentwater=width*ht;
            maxwater=max(maxwater,currentwater);
            height[lp]<height[rp]? lp++:rp--;


        }
        return maxwater;
        
    }
};