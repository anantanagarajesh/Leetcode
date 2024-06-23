class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> mindq, maxdq;
        int l = 0, r = 0, maxlen = 0;

        while(r < nums.size()) {
            while(!maxdq.empty() && maxdq.back() < nums[r]) {
                maxdq.pop_back();
            }
            maxdq.push_back(nums[r]);

            while(not mindq.empty() && mindq.back() > nums[r]) {
                mindq.pop_back();
            }
            mindq.push_back(nums[r]);

            while(abs(maxdq.front() - mindq.front()) > limit) {
                if(nums[l] == maxdq.front()) maxdq.pop_front();
                if(nums[l] == mindq.front()) mindq.pop_front(); 
                l++;
            }
            
            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;

    }
};