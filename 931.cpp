class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<int> dp0(n, 0), dp1(n, 0);
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                int left = ((c - 1) >= 0) ? dp0[c - 1] : INT_MAX;
                int middle = dp0[c];
                int right = ((c + 1) < n) ? dp0[c + 1] : INT_MAX;
                dp1[c] = matrix[r][c] + min({left, middle, right});
            }
            swap(dp0, dp1);
        }

        int minSum = INT_MAX;
        for (auto& sum : dp0) minSum = min(minSum, sum);
        return minSum;
    }
};
