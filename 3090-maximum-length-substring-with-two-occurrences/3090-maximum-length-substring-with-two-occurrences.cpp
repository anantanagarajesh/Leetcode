class Solution {
public:
    int maximumLengthSubstring(string s) {
    map<char, int> mp;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); ++right) {
        mp[s[right]]++;

            while(1){
                int maxF=0;
                for(auto it:mp)
                    maxF=max(maxF,it.second);
                if(maxF>2){
                    mp[s[left]]--;
                    left++;
                }
                else break;
            }
        

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
    }
};