class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>minfreq(26,INT_MAX);
        
        for(const string word:words){
            vector<int>temp(26,0);
            for(char c:word){
                temp[c-'a']++;
            }
            for(int i=0;i<26;i++)
                minfreq[i]=min(minfreq[i],temp[i]);
        }
        vector<string>ans;
        for(int i=0;i<26;i++){
            while(minfreq[i]-- >0){
                ans.push_back(string(1,i+'a'));
            }
        }
        return ans;
    }
};