class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int a=INT_MAX,b=INT_MAX;
        if(ops.size()==0)
            return m*n;
        for(int i=0;i<ops.size();i++){
            if(ops[i][0]<a)
                a=ops[i][0];
        }
        for(int j=0;j<ops.size();j++){
            if(ops[j][1]<b)
                b=ops[j][1];
        }
        return a*b;
    }
};