class Solution {
  public:
    int countBitsFlip(int x, int y) {
        // code here
        int cnt=0;
        while(x>0 || y>0){
            if(x%2!=y%2){
                cnt++;
            }
            x=x/2;
            y=y/2;
        }
    return cnt;
    }
};