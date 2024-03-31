#include <iostream>
#include <unordered_map>
#include <cctype>
#include <string>
// #include <ctime>

using namespace std;
string index_to_name[100001];
unordered_map<string, int> name_to_index;

int main() {
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    // clock_t start = clock();
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        string name;
        cin >> name;
        index_to_name[i] = name;
        name_to_index[name] = i;
    }
    
    for(int i = 0; i < m; i++) {
        string cmd;
        cin >> cmd;
        if(isdigit(cmd[0])) {
            cout << index_to_name[stoi(cmd)] << '\n';
        } else {
            cout << name_to_index[cmd] << '\n';
        }
    }

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}