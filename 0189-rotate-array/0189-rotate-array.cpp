class Solution {
public:
    void reverse(vector<int>&arr,int low,int high)
    {
        while(low<high)
        {
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=n-1;
        k=k%n;
        reverse(nums,low,high);
        reverse(nums,low,k-1);
        reverse(nums,k,high);
    }
};