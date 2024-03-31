#include <iostream>
#include <bitset>
#include <ctime>

using namespace std;

void add(bitset<21>& s, int x) {
    s[x] = 1;
}

void remove(bitset<21>& s, int x) {
    s[x] = 0;
}

void check(bitset<21>& s, int x) {
    cout << s[x] << '\n';
}

void toggle(bitset<21>& s, int x) {
    s[x] = !s[x];
}

void all(bitset<21>& s) {
    s.set();
}

void empty(bitset<21>& s) {
    s.reset();
}

int main() {
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    // clock_t start = clock();
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    bitset<21> s(0b0);
    int m;
    cin >> m;
    while(m--) {
        string cmd;
        cin >> cmd;
        if(cmd == "add") {
            int x;
            cin >> x;
            add(s, x);
        } else if(cmd == "remove") {
            int x;
            cin >> x;
            remove(s, x);
        } else if(cmd == "check") {
            int x;
            cin >> x;
            check(s, x);
        } else if(cmd == "toggle") {
            int x;
            cin >> x;
            toggle(s, x);
        } else if(cmd == "all") {
            all(s);
        } else if(cmd == "empty") {
            empty(s);
        }
    }

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}