class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=garbage.size(),count=0;
        int idx1=0,idx2=0,idx3=0;
        for(int i=0;i<n;i++){
            int m=garbage[i].length();
            for(int j=0;j<m;j++){
                if(garbage[i][j]=='G'){
                    idx1=i;
                    count++;
                }
                if(garbage[i][j]=='P'){
                    idx2=i;
                    count++;
                }
                if(garbage[i][j]=='M'){
                    idx3=i;
                    count++;
                }
            }          
        }
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<travel.size();i++){
            if(i<idx1)
                sum1+=travel[i];
            if(i<idx2)
                sum2+=travel[i];
            if(i<idx3)
                sum3+=travel[i];
        }
        
        return sum1+sum2+sum3+count;
    }
};