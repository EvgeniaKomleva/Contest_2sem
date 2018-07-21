#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct edge
{
    int x, y, w;
    edge(){}
    edge(int x, int y, int w): x(x), y(y), w(w) {}
};

bool cmp(const edge& a, const edge& b)
{
    return a.w < b.w;
}

vector <int> leader;

int getLeader(int x)
{
    if (x == leader[x])
        return x;

    return leader[x] = getLeader(leader[x]);
}

bool unite(int x, int y)
{
    x = getLeader(x);
    y = getLeader(y);

    if (x == y)
        return false;

    if (rand() % 2 == 0)
        swap(x, y);

    leader[x] = y;
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    int matr[n][n];
    int co_plas=0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matr[i][j];
            if (matr[i][j]!=0) {
                co_plas++;
            }
        }
    }
    int k = 0;
    int m = co_plas/2;
    vector <edge> e(m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j <i; j++){
            if (matr[i][j]!=0) {
                e[k].x=i+1;
                e[k].y = j+1;
                e[k].w = matr[i][j];
                cout << e[k].x<< " " << e[k].y << " " << e[k].w << endl;
                k++;
            }
        }
    }
    sort(e.begin(), e.end(), cmp);

    leader.resize(m);
    for (int i = 0; i < m; i++)
        leader[i] = i;

    vector <edge> ans;

    for (int i = 0; i < m; i++)
    {
        int x = e[i].x, y = e[i].y;

        if (unite(x, y))
            ans.push_back(e[i]);
    }
    int sum = 0;
    for (int i = 0; i < ans.size(); i++)
        sum+=ans[i].w;
    printf("%d\n", sum);
    for (int i = 0; i < ans.size(); i++)
        printf("%d %d\n", ans[i].x + 1, ans[i].y + 1);

    return 0;
}