class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.length();
        int m = searchWord.length();
        int count=0,j,flag=0;
        vector<int> arr;
        arr.push_back(0);
        for(int i=0;i<n;i++){
            if(sentence[i]==' ')
                arr.push_back(i+1);
        }
        for(auto a:arr){
            for(j=0;j<m;j++){
                if(sentence[a+j]==searchWord[j])
                    flag=1;
                else{
                    flag=0;
                    break;
                }
                
            }
            if(flag==1)
                return count+1;
            count++;
        }
        return -1;
        
    }
};