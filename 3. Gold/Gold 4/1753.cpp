#include <iostream>
#include <queue>
#include <vector>
// #include <ctime>

using namespace std;

int dist[20001];
bool visited[20001];
vector<pair<int, int>> graph[20001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main() {
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    // clock_t start_time = clock();
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int v, e;
    cin >> v >> e;
    int start;
    cin >> start;
    for(int i = 1; i <= v; i++) {
        dist[i] = 2e9;
        visited[i] = false;
    }
    dist[start] = 0;
    for(int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    pq.push({0, start});

    while(!pq.empty()) {
        int distance = pq.top().first;
        int vertex = pq.top().second;
        pq.pop();

        if(visited[vertex]) continue;
        visited[vertex] = true;

        for(int i = 0; i < graph[vertex].size(); i++) {
            int next_vertex = graph[vertex][i].first;
            int next_distance = graph[vertex][i].second;
            if(dist[next_vertex] > dist[vertex] + next_distance) {
                dist[next_vertex] = dist[vertex] + next_distance;
                pq.push({dist[next_vertex], next_vertex});
            }
        }
    }

    for(int i = 1; i <= v; i++) {
        if(dist[i] == 2e9) cout << "INF\n";
        else cout << dist[i] << '\n';
    }

    // cout << "clock: " << (double)(clock() - start_time) / CLOCKS_PER_SEC << endl;
    return 0;
}