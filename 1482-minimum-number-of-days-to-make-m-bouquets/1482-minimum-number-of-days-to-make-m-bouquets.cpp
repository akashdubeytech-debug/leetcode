class Solution {
public:

    bool possible(vector<int>&a,long long day,int m,int k)
    {
        int flower=0;
        int bow=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<=day)
            {
                flower++;
                if(flower==k)
                {
                    bow++;
                    flower=0;
                }

            }
            else
            {
                flower=0;
            }
        }
        return bow>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k>bloomDay.size())
        {
            return -1;
        }
        int   low=INT_MAX;
        int  high=INT_MIN;
        long long ans=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            low=min(low,bloomDay[i]);
            high=max(high,bloomDay[i]);
        }
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};