class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>ma;
        for(int i=0;i<nums.size();i++)
        {
            
            int rem=target-nums[i];
            if(ma.find(rem)!=ma.end())
            {
                return { ma[rem],i};
            }
            ma[nums[i]]=i;
        }
        return {};
    }

};