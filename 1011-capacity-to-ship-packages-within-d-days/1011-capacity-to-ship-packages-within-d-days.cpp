class Solution {
public:
bool pos(vector<int>&a,int days,int mid)
{
    int day=1;
    int load=0;
    for(int i=0;i<a.size();i++)
    {
        if((load+a[i])>mid){
            day++;
            load=a[i];
        }
        else
        {
            load+=a[i];
        }
    }
    return day<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=weights[0];
        int high=0;
        for(int i=0;i<n;i++)
        {
            if(weights[i]>low)
            {
                low=weights[i];
            }
            high+=weights[i];
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(pos(weights,days,mid)){
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