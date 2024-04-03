#include <iostream>
// #include <ctime>

using namespace std;

int arr[100001], sum[100001];

int main() {
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    // clock_t start = clock();
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    arr[0] = 0;
    sum[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }

    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << '\n';
    }

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}