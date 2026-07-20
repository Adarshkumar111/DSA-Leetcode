class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here
        n=n^0;
        int cnt=0;
        int maxcnt=0;
        while(n>0){
            if(n&1==1){
                cnt++;
                maxcnt=max(maxcnt, cnt);
            }
            else{
                cnt=0;
            }
            n=n>>1;
        }
        return maxcnt;
    }
};
