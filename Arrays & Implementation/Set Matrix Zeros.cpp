class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n=matrix[0].size(),isCol=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                   if(j==0)
                       isCol=1;
                    else
                        matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int k=0;k<n;k++)
                    matrix[i][k]=0;
            }
        }
        for(int i=1;i<n;i++){
            if(matrix[0][i]==0)
            {
                for(int k=0;k<m;k++)
                    matrix[k][i]=0;
            }
        }
        if(matrix[0][0]==0)
        {
            for(int i=0;i<n;i++)
                matrix[0][i]=0;
        }
        if(isCol)
        {
            for(int i=0;i<m;i++)
                matrix[i][0]=0;
        }
    }
};
