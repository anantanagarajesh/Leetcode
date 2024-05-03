class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0;
     
        while(i<version1.length() || j<version2.length()){
            int n1=0,n2=0;
            while(i<version1.length() && version1[i]!='.'){ 
                n1=n1*10+(version1[i]-'0');
                i++;
            }
            i++;
            while(j<version2.length() && version2[j]!='.'){ 
                n2=n2*10+(version2[j]-'0');
                j++;
            }
            j++;
            
            if(n1<n2)
                return -1;
            if(n1>n2)
                return 1;
              
        }
        return 0;
    }
};