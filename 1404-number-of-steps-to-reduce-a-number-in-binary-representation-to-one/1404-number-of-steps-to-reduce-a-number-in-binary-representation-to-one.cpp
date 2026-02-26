cpp []
class Solution {

public:
    int numSteps(string s) {
        int len = s.size();
        int ops = 0;
        int carry = 0;
        for(int i=len-1;i>0;--i){
            int num = s[i]-'0'+carry;
            if(num&1){
                carry=1;
                ops+=2;
            }
            else{
                ++ops;
            }
        }
        return ops+carry;
    }
};