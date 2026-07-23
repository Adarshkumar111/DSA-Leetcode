class Solution {
  public:
    int digitalRoot(int n) {
        // code here
        if(n<10) return n;
        
        int sum=0;
        while(n>0){
            sum=sum+n%10;
            n=n/10;
        }
        digitalRoot(sum);
    }
};