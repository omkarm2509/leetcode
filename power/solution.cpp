class Solution {
public:
    double myPow(double x, int n) {
        long binaryform=n;
        if(n<0){
            x=1/x;
            binaryform=-binaryform;
        }
        double answer=1;
        while (binaryform>0){
            if(binaryform%2==1){
                answer*=x;
            }
            x*=x;
            binaryform/=2;
        }
        return answer;
    }
};