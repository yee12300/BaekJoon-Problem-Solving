#include <iostream>
// #include <ctime>

using namespace std;
int stack[10000];
int stack_size = 0;

void push_stack(int x) {
    stack[stack_size++] = x;
}

void pop_stack() {
    if(stack_size == 0) {
        cout << -1 << '\n';
    } else {
        cout << stack[--stack_size] << '\n';
    }
}

void size_stack() {
    cout << stack_size << '\n';
}

void empty_stack() {
    cout << (stack_size == 0) << '\n';
}

void top_stack() {
    if(stack_size == 0) {
        cout << -1 << '\n';
    } else {
        cout << stack[stack_size - 1] << '\n';
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
            push_stack(x);
        } else if(cmd == "pop") {
            pop_stack();
        } else if(cmd == "size") {
            size_stack();
        } else if(cmd == "empty") {
            empty_stack();
        } else if(cmd == "top") {
            top_stack();
        }
    }

    // cout << "clock: " << (double)(clock() - start) / CLOCKS_PER_SEC << endl;
    return 0;
}