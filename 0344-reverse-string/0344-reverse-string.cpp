class Solution {
public:
    void reverseString(vector<char>& s) {
        string res="";
        for(auto i:s){
            res+=i;
        }
        reverse(res.begin(),res.end());
        s.clear();
        for(char c:res){
            s.push_back(c);
        }
    }
};