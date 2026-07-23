class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        // if(p==0)return 0;
        // if(p==1) return n;
        // return n*pow(n,p-1);
        if(n==0) return 0;
        
        return pow(n,p);
    }
};
