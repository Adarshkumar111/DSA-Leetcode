class Solution {
public:
    int maxDepth(string s) {
        int maxDepth=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                int currDepth=1;
                for(int j=i+1; j<s.size(); j++){
                    maxDepth=max(maxDepth, currDepth);
                    if(s[j]=='(') currDepth++;
                    else if(s[j]==')')currDepth--;
                    if(currDepth ==0) break;
                }
            }
        }
        return maxDepth;
    }
};