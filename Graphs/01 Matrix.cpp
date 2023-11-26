class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> moves = {{0,1},{1,0},{0,-1},{-1,0}};
        int n = mat.size(),m=mat[0].size();
        vector<vector<int>> ans(n,vector<int> (m,-1));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    ans[i][j]=0;
                }
            }

        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(auto move: moves)
            {
                int nextX = x + move[0];
                int nextY = y + move[1];
                if(nextX>=0 && nextX<n && nextY>=0 && nextY<m && ans[nextX][nextY]==-1)
                {
                    ans[nextX][nextY] = ans[x][y]+1;
                    q.push({nextX,nextY});
                }
            }
        }
        return ans;
    }
};
