int maxi(vector<int>&a)
{
    int k=a[0];
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>k)
        {
            k=a[i];
        }
    }
    return k;
}
long long total(vector<int>b,int j)
{
    long long ans=0;
    for(int i=0;i<b.size();i++)
    {
        ans+=ceil((double)b[i]/j);
    }
    return ans;
}


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int ans=INT_MAX;
        int high=maxi(piles);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long r=total(piles,mid);
            if(r<=h)
            {
                ans=min(ans,mid);
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