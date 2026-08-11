class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_count=0;
        int index=0;
        int row=mat.size();
        for(int i=0;i<row;i++)
        {
            int count=0;
            int col=mat[i].size();
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
            }
            if(count>max_count)
            {
                max_count=count;
                index=i;
            }
        }
        return {index,max_count};
    }
};