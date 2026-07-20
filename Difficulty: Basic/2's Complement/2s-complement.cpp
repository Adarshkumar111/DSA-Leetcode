class Solution {
  public:
    string twosComplement(string s) {
        // code here
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='0') s[i]='1';
            else s[i]='0';
        }
        int carry = 1;

        for(int i = n - 1; i >= 0; i--) {
            if(carry == 0)
            break;
            if(s[i] == '0') {
                s[i] = '1';
                carry = 0;
            }
            else {
                s[i] = '0';
                carry = 1;
            }
        }
        return s;

    }
};