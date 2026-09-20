class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int first=0,second=0;
        int length=0;
        vector<int>ans(256,0);
        while(second<s.size())
        {
            while(ans[s[second]])
            {
                ans[s[first]]=0;
                first++;
            }
            ans[s[second]]=1;
            length=max(length,second-first+1);
            second++;
        }
        return length;
    }
};