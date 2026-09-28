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
    int maximalRectangle(vector<vector<char>>& matrix) {
       
        int ans=0;
        int row=matrix.size();
        int col=matrix[0].size();
         vector<int>height(col);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]=='0')
                {
                    height[j]=0;
                }
                else
                {
                    height[j]+=1;
                }
            }
            ans=max(ans,largestRectangleArea(height));
        }
        return ans;
    }
};