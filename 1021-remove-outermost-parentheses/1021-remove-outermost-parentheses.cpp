class Solution {
public:
    string removeOuterParentheses(string s) {
        string result ="";
        string temp="";
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            char ch=s[i];
            temp+=ch;
            if(ch=='(') cnt++;
            else cnt--;

            if(cnt==0){
                result += temp.substr(1,temp.size()-2);
                temp="";
            }
        }
        return result;
    }
};