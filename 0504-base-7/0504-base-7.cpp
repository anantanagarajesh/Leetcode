class Solution {
public:
    string convertToBase7(int num) {
        int i=0,rem=0,sum=0;
        while(num!=0){
            rem=num%7;
            sum=sum+rem*pow(10,i);
            i++;
            num=num/7;
        }
        return to_string(sum);
    }
};