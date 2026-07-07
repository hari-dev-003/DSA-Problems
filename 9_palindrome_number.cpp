class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        int sum=0;
        while(num!=0){
            int digit=num%10;
            if((sum> INT_MAX/10) || (sum<INT_MIN/10)) return false;
            sum = sum*10 + digit;
            num/=10;
        }
        if(x<0) return false;
        if(sum==x) return true;
        return false;
    }
};