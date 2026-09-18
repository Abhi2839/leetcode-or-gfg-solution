class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> x(n,vector<int>(n,0)),y(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) x[i][j]=grid[i][(j+rowShift[i])%n];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) y[j][i]=x[(j+colShift[i])%n][i];
        }
        return y;
    }
};