#include <iostream>
// #include <ctime>

using namespace std;

int matrix[501];

int min_matmul_count(int matrix[501], int size) {
    int dp[501][501] = {0, };
    for(int i = 1; i < size; i++) {
        for(int j = 1; j < size - i; j++) {
            int k = i + j;
            dp[j][k] = 0x7fffffff;
            for(int l = j; l < k; l++) {
                dp[j][k] = min(dp[j][k], dp[j][l] + dp[l + 1][k] + matrix[j - 1] * matrix[l] * matrix[k]);
            }
        }
    }
    return dp[1][size - 1];
}

int main() {
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    // clock_t start = clock();
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int r, c;
        cin >> r >> c;
        matrix[i] = r;
        matrix[i + 1] = c;
    }

    cout << min_matmul_count(matrix, n + 1);

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}