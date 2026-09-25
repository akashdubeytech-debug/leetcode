class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long count=0;
        int num=x;
        while(x!=0)
        {
            count=10*count+(x%10);
            x=x/10;
        }
        if(count==num)
        {
            return true;
        }
        return false;
    }
};