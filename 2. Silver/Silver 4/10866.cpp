#include <iostream>
// #include <ctime>

using namespace std;
int deque[20000];
int deque_size = 0;
int deque_start = 9999;
int deque_end = 10000;

void push_front_deque(int x) {
    deque[deque_start--] = x;
    deque_size++;
}

void push_back_deque(int x) {
    deque[deque_end++] = x;
    deque_size++;
}

void pop_front_deque() {
    if(deque_size == 0) {
        cout << -1 << '\n';
    } else {
        cout << deque[++deque_start] << '\n';
        deque_size--;
    }
}

void pop_back_deque() {
    if(deque_size == 0) {
        cout << -1 << '\n';
    } else {
        cout << deque[--deque_end] << '\n';
        deque_size--;
    }
}

void size_deque() {
    cout << deque_size << '\n';
}

void empty_deque() {
    cout << (deque_size == 0) << '\n';
}

void front_deque() {
    if(deque_size == 0) {
        cout << -1 << '\n';
    } else {
        cout << deque[deque_start + 1] << '\n';
    }
}

void back_deque() {
    if(deque_size == 0) {
        cout << -1 << '\n';
    } else {
        cout << deque[deque_end - 1] << '\n';
    }
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
    while(n--) {
        string cmd;
        cin >> cmd;
        if(cmd == "push_front") {
            int x;
            cin >> x;
            push_front_deque(x);
        } else if(cmd == "push_back") {
            int x;
            cin >> x;
            push_back_deque(x);
        } else if(cmd == "pop_front") {
            pop_front_deque();
        } else if(cmd == "pop_back") {
            pop_back_deque();
        } else if(cmd == "size") {
            size_deque();
        } else if(cmd == "empty") {
            empty_deque();
        } else if(cmd == "front") {
            front_deque();
        } else if(cmd == "back") {
            back_deque();
        }
    }

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}