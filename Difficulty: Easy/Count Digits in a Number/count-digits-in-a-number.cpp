class Solution {
  public:
    int countDigits(int n) {
        // Code here
        // int cnt=0;
        
        // while(n>0){
        //     n=n/10;
        //     cnt++;
            
        // }
        // return cnt;
        
        if(n<10) return 1;
        return 1+countDigits(n/10);
    }
};