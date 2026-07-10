class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>ch;
        for(int i=0; i<s.size(); i++){
            if(ch.empty()){
                ch.push(s[i]);
            }
            else{
                if(ch.top()==s[i]) ch.pop();
                else ch.push(s[i]);
            }
        }
        string result="";
        while(!ch.empty()){
            result=ch.top()+result;
            ch.pop();
        }
        return result;

    }
};