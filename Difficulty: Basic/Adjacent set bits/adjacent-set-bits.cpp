class Solution {
  public:
    bool adjacentBits(int n) {
        // code here
        vector<int>bit;
        
        while(n>0){
            bit.push_back(n%2);
            n=n/2;
        }
        
        for(int i=0;i<bit.size()-1; i++){
            if(bit[i]==1 && bit[i+1]==1){
                return true;
            }
        }
        return false;
    }
};