class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index=-1;
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                index=mid;
                break;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;

            }
            else
            {
                low=mid+1;
            }
        }
        return index;
    }
};