class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>original=heights;
        int count=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(original[i]!=heights[i])
                count++;
        }
        return count;
    }
};