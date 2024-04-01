#include <iostream>
#include <ctime>

using namespace std;

int main() {
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    clock_t start = clock();
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}