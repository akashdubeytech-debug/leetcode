class Solution {
public:
    int mySqrt(int x) {
        int ans=-1;
        int low=1;
        int high=x;
        if(x==0 || x==1)
        {
            ans=x;
        }
        while(low<=high)
        {
            long long mid=low +(high-low)/2;
            if((mid *mid)==x)
            {
                ans=mid;
                break;
            }
            else if((mid*mid)<=x)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }


        }
        return ans;
    }
};