class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       int n=heights.size();
       int maxi=0;
       int area=0;
       stack<int>st;
       for(int i=0;i<n;i++)
       {
        while(!st.empty()&&heights[st.top()]>heights[i])
        {
            int index=st.top();
            st.pop();
            
            if(!st.empty())
            {
                 area=heights[index]*(i-st.top()-1);
                maxi=max(maxi,area);
            }
            else if(st.empty())
            {
                area=heights[index]*(i);
                maxi=max(maxi,area);
            }
        }
        st.push(i);
       }
       while(!st.empty())
       {
        int index=st.top();
        st.pop();
        if(!st.empty())
        {
            area=heights[index]*(n-st.top()-1);
            maxi=max(maxi,area);
        }
        else
        {
            area=heights[index]*(n);
            maxi=max(maxi,area);
        }
       }
       return maxi;
    }
};