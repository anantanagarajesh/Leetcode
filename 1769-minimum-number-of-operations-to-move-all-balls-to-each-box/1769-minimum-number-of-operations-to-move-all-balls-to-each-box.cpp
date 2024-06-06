class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>balls;
        for(int i=0;i<boxes.length();i++){
            if(boxes[i]=='1')
                balls.push_back(i);
        }
        vector<int>ans;
        for(int i=0;i<boxes.length();i++){
            int sum=0;
            for(int j=0;j<balls.size();j++){
                sum=sum+abs(i-balls[j]);
            }
            ans.push_back(sum);
        }
        return ans;     
    }
};