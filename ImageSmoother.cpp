class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();

        vector<vector<int>> ans(n, vector<int>(m));

        //iterate on every cell
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long sum = 0;
                int count = 0;


                // iterating on all possibile indices
                for (int x = i - 1; x <= i + 1; x++) {
                    for (int y = j - 1; y <= j + 1; y++) {

                        //valid indices
                        if (0 <= x && x < n && 0 <= y && y < m) {
                            sum = sum + img[x][y];
                            count += 1;
                        }
                    }
                }
                ans[i][j] = sum / count;
            }
        }
        return ans;
    }
};