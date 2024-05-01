class Solution {
public:
    string reversePrefix(string word, char ch) {
        string res="";
        int i=0;
        for(i=0;i<word.length();i++){
            if(word[i]==ch)
                break;
        }
        if(i==word.length()){
            return word;
        }
        int n=i;
        while(i>=0){
            res+=word[i];
            i--;
        }
        while(n<word.length()-1){
            res+=word[n+1];
            n++;
        }
        return res;
    }
};