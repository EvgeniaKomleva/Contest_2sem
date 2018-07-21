#include <functional>
#include <queue>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue <double> capital;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        capital.push(c);
    }
    double sum = 0;
    vector<double> money(n);
    int  i=n-1;
    while (!capital.empty())
    {
        money[i] = capital.top();
        capital.pop();
        i--;
    }
    for (int j = 1; j < n; j++){
        money[j] = money[j]+ money[j-1];
        int y=(int)money[j];
        sum = sum + y;
        //double t =0.01;
        //cout << t << endl;
    }
    cout << sum;
    return 0;
}