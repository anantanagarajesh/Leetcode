class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>a(bank.size(),0);
        for(int i=0;i<bank.size();i++){
            int count=0;
            for(int j=0;j<bank[i].length();j++){
                if(bank[i][j]=='1')
                    count++;
            }
            if(count!=0)
                a.push_back(count);
        }
        int sum=0;
        
        for(int i=0;i<a.size()-1;i++){
            sum=sum+(a[i]*a[i+1]);
            cout<<sum;
        }
        return sum;
    }
};