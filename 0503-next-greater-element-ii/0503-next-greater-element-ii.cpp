class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        stack<int>st;
        for(int i=0;i<2*nums.size();i++)
        {
            while(!st.empty()&&nums[st.top()%nums.size()]<nums[i%nums.size()])
            {
                ans[st.top()%nums.size()]=nums[i%nums.size()];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};