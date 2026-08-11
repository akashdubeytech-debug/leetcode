class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        int m=matrix[0].size();
        bool ans=false;
        int low=0;
        int high=m-1;
        while(low<n && high>=0)
        {
            if(matrix[low][high]==target)
            {
                ans=true;
                break;
            }
            else if(matrix[low][high]<target)
            {
                low++;
            }
            else {
                high--;
            }
        }
        return ans;
    }
};