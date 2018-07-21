#include <iostream>
#include <vector>
#include <list>

using namespace std;

void dfs(int cur, vector<vector<int>>& adj, vector<bool>& usd) {
    usd[cur] = true;
    for (int i=0;i<adj[cur].size();++i) {
        int nxt = adj[cur][i];
        if (!usd[nxt])
            dfs(nxt, adj, usd);
    }
}
int connected_components_amount_dfs(int n, vector<vector<int>>& adj, vector<bool>& usd) {
    int cnt = 0;
    for (int i=1; i<=n; ++i) {
        if (!usd[i]) {
            dfs(i, adj, usd);
            ++cnt;
        }
    }
    return cnt;
}

int main() {
    unsigned int n;
    int m;
    int counts  = 0;
    cin >> n>>m;
    vector<bool> usd(n);
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            char a;
            cin >>a;
            if (a == '+') {
                adj[i].push_back(j);
            }
        }
    }
    counts = connected_components_amount_dfs(n, adj, usd);
    cout << counts;
    return 0;
}