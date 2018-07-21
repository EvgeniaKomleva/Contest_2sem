#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<double > queue;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        queue.push(-c);
    }
    double sum =0;
    for (int j = 0; j < n-1; j++){
        double k = queue.top();
        queue.pop();
        double t = queue.top();
        queue.pop();
        sum = sum - k - t;
        queue.push(k+t);
    }

    double r = sum/100;
    cout <<  r<<endl;
    return 0;
}