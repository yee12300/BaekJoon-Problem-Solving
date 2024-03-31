#include <iostream>
// #include <ctime>

using namespace std;
int queue[10000];
int queue_end = 0;
int queue_start = 0;

void push_queue(int x) {
    queue[queue_end++] = x;
}

void pop_queue() {
    if(queue_start == queue_end) {
        cout << -1 << '\n';
    } else {
        cout << queue[queue_start++] << '\n';
    }
}

void size_queue() {
    cout << queue_end - queue_start << '\n';
}

void empty_queue() {
    cout << (queue_start == queue_end) << '\n';
}

void front_queue() {
    if(queue_start == queue_end) {
        cout << -1 << '\n';
    } else {
        cout << queue[queue_start] << '\n';
    }
}

void back_queue() {
    if(queue_start == queue_end) {
        cout << -1 << '\n';
    } else {
        cout << queue[queue_end - 1] << '\n';
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
        if(cmd == "push") {
            int x;
            cin >> x;
            push_queue(x);
        } else if(cmd == "pop") {
            pop_queue();
        } else if(cmd == "size") {
            size_queue();
        } else if(cmd == "empty") {
            empty_queue();
        } else if(cmd == "front") {
            front_queue();
        } else if(cmd == "back") {
            back_queue();
        }
    }

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}