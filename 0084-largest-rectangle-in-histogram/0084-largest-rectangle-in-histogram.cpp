class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       int n=heights.size();
       vector<int>left(n,-1);
       vector<int>right(n,n);
       stack<int>sl;
       stack<int>sr;
       int maxi=0;
       for(int i=0;i<n;i++)
       {
        while(!sr.empty()&&heights[sr.top()]>heights[i])
        {
            right[sr.top()]=i;
            sr.pop();
        }
        sr.push(i);
       }
       for(int i=n-1;i>=0;i--)
       {
        while(!sl.empty()&&heights[sl.top()]>heights[i])
        {
            left[sl.top()]=i;
            sl.pop();
        }
        sl.push(i);
       }
       for(int i=0;i<n;i++)
       {
        int area=heights[i]*(right[i]-left[i]-1);
        maxi=max(maxi,area);
       }
       return maxi;
    }
};