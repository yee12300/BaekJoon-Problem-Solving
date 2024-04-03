#include <iostream>
// #include <ctime>

using namespace std;

int solution[100000];
int min_pair[3];

int main() {
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    // clock_t start = clock();
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> solution[i];
    }

    min_pair[0] = 2e9;
    int left = 0;
    int right = n - 1;
    while (left < right) {
        int sum = solution[left] + solution[right];
        if (abs(sum) < min_pair[0]) {
            min_pair[0] = abs(sum);
            min_pair[1] = solution[left];
            min_pair[2] = solution[right];
        }
        if (sum < 0) {
            left++;
        } else {
            right--;
        }
    }

    cout << min_pair[1] << " " << min_pair[2] << endl;

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}