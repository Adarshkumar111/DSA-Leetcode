class Solution {
  public:
    string computeParity(int n) {
        // code here
        vector<int>bit;
        while(n>0){
            bit.push_back(n%2);
            n=n/2;
        }
        int cnt=0;
        for(int i=0; i<bit.size(); i++){
            if(bit[i]==1){
                cnt++;
            }
        }
        if(cnt%2==0) return "even";
        else return "odd";
    }
};