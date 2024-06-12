class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto it=mp.begin();it!=mp.end();++it){
            while(it->second>0){
                nums.push_back(it->first);
                it->second--;
            }    
        }
    }
};