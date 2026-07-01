class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int size=a.size();
        vector<int>neg;
        vector<int>pos;
        for(int i=0; i<size; i++){
            if(a[i]<0) neg.push_back(a[i]);
            else pos.push_back(a[i]);
        }

        if(neg.size()==0) // no neg element
        {
            for(int i=0; i<pos.size(); i++){
                pos[i]=pos[i]*pos[i];
            }
                return pos;
        }
        if(pos.size()==0)// no pos element
        {
            for(int i=0; i<neg.size(); i++){
                neg[i]=neg[i]*neg[i];
            }
                reverse(neg.begin(), neg.end());
                return neg;
        }

        int i=0, j=0;

        int idx=0;
        int n=neg.size();
        int m=pos.size();
        vector<int>res(n+m);
        for(int i=0; i<n; i++)
        neg[i]=neg[i]*neg[i];
        reverse(neg.begin(), neg.end());

        for(int i=0; i<m; i++){
            pos[i]=pos[i]*pos[i];
        }

        while(i<n and j<m){
            if(neg[i]<=pos[j]){
                res[idx]=neg[i];
                idx++;
                i++;
            }
            else{
                res[idx]=pos[j];
                idx++;
                j++;
            }
        }
        while(i<n){
            res[idx]=neg[i];
            idx++;
            i++;
        }
        while(j<m){
            res[idx]=pos[j];
            idx++;
            j++;
        }
        return res;
    }
};