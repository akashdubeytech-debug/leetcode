class Solution {
public:
bool pos(vector<int>&a,int th,int mid)
{
    int ans=0;
    for(int i=0;i<a.size();i++)
    {
        ans+=(a[i]+mid-1)/mid;
    }
    return ans<=th;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>high)
            {
                high=nums[i];
            }
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(pos(nums,threshold,mid))
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};