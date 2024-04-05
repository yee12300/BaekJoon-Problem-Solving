#include <iostream>
// #include <ctime>

using namespace std;

int main() {
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    // clock_t start = clock();
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int min = 1000000, max = -1000000;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(num < min) min = num;
        if(num > max) max = num;
    }
    cout << min << " " << max;

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}