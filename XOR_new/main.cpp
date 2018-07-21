#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void build ( int *a, int *t, int v, int tl, int tr ) {
    if (tl == tr)
    {t[v] = a[tl];}
    else {
        int tm = (tl + tr) / 2;
        build (a,t,  v*2, tl, tm);
        build (a,t,  v*2+1, tm+1, tr );
        t[v] = t[v*2] ^ t[v*2+1];
    }
}
int sum (int *t, int v, int tl, int tr, int l, int r) {
    if (l > r)
    {return 0;}
    if (l == tl && r == tr)
    {return t[v];}
    int tm = (tl + tr) / 2;
    int k = sum(t, v*2, tl, tm, l, min(r,tm));
    int p = sum(t,v*2+1, tm+1, tr, max(l,tm+1), r);
    int c = (k ^ p);
    return (c);
}
void update (int*t, int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr)
    {t[v] = new_val;}
    else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
        {update (t, v*2, tl, tm, pos, new_val);}
        else
        {update (t, v*2+1, tm+1, tr, pos, new_val);}
        t[v] = t[v*2] ^ t[v*2+1];
    }
}
int main()
{
    int N = 0, K = 0;
    scanf("%d", &N);
    scanf("%d", &K);
    int* a = (int*)calloc(sizeof(int), N);
    int* t = (int*)calloc(sizeof(int), 4*N+1);
    int i = 0;
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]); }
    build(a, t, 1, 0, N-1);
    for(i = 0; i < K; i++)
    {
        int x, l, r;
        scanf("%d", &x);
        scanf("%d %d", &l, &r);
        if(x == 1) {
            printf("%d\n", sum(t, 1, 0, N-1, l, r)); }
        else if(x == 2) {
            update(t, 1, 0, N-1, l, r); }
    }
    free(t);
    free(a);
    return 0;
}