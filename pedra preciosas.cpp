#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(int n, int V, int C, vector<int>, &pedras) {
    vector<vector<int>> dp(V + 1, vector<int>(C + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = V; j >= pedras[i][0]; j--) {
            for (int k = C; k >= pedras[i][1]; k--) {
                dp[j][k] = max(dp[j][k], dp[j - pedras[i][0]][k - pedras[i][1]] + pedras[i][2]);
            }
        }
    }
    return dp[V][C];
}

int main() {
    int n, V, C;
    cin >> n >> V >> C;
    vector<vector<int>> pedras(n + 1, vector<int>(3, 0));
    for (int i = 1; i <= n; i++) {
        cin >> pedras[i][0] >> pedras[i][1] >> pedras[i][2];
    }
    cout << knapsack(n, V, C, pedras) << endl;
    return 0;
}
