#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int recheto (int n, int m ){ // выводит кол-во от 1 до n
    int count = 0;
    int j;
    vector<char> prime ( 20000001, true);
    prime[0] = prime[1] = false;
    for (int i=2; i<= 20000000; ++i) {
        if (prime[i]) {
            count += 1;
            if (i * 1ll * i <=  20000000) {
                for (j = i * i; j <=  20000000; j += i) {
                    prime[j] = false;
                }
            }
        }
    }
    queue <int> q;
    int co = 0;
    int r = 0;
    for (int i=2; i<= 20000000; ++i) {
        if (q.size()< n) {
            q.push(prime[i]);
            if (q.back()) {co = co+1;}
        }
        else {
            if (co == m) {r = r+1; return i-n;}
            if(q.front()) {co = co-1;}
            q.pop();
            q.push(prime[i]);
            if (q.back()) {co = co+1;}
        }
    }
    if (r ==0) { return -1;}
}
int main() { //алгоритм нахождения всех простых от n до m
    int n,  m;
    cin >>m>> n;
    cout << recheto(n, m);
    return 0;
}
