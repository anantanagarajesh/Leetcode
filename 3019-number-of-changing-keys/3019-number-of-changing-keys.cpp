class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=1;i<size(s);i++){
            if(tolower(s[i])!=tolower(s[i-1]))
                count++;
            
            
        }
        return count;
    }
};