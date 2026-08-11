class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        bool ans=false;
        int m=matrix[0].size();
        int low=0;
        int high=n*m-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int r=mid/m;
            int c=mid%m;
            if(matrix[r][c]==target)
            {
                ans=true;
                break;
            }
            else if(matrix[r][c]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
     
        }
        return ans;
    }
};