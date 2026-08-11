class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int row=0;
            for(int i=0;i<n;i++)
            {
                if(mat[i][mid]>mat[row][mid])
                {
                    row=i;
                }

            }
            int last=(mid-1>=0)?mat[row][mid-1]:-1;
            int after=(mid+1<m)?mat[row][mid+1]:-1;
            if(last<mat[row][mid] && after<mat[row][mid])
            {
                return { row,mid};
            }
            else if(mat[row][mid]<after)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return {-1,-1};
    }
};