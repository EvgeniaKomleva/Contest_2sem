#include <iostream>
using namespace std;

int kode (char c) {
    if (c =='(') { return 0;}
    else if (c == ')') { return 1;}
    else if (c == '{') { return 2;}
    else if (c == '}') { return 3;}
    else if (c == '*') { return 4;}
    else if (c == '/') { return 5;}
    else if (c == '\n') { return 6;}
    else if (c == '\'') { return 7;}
    else{ return 8;}
}
enum sostoanie {
    a = 0, b = 1, c = 2, d= 3, e = 4, j= 5, k = 6, i = 7
};
int main () {
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    sostoanie func [8] [9] = {
    {b, a,e, a, a, j, a,i, a},
    {b, a,e, a, c, j, a,i, a},
    {c, c, c,c , d, c, c, c,c},
    {c, a, c, c,d, c, c, c, c},
    {e, e, e, a, e, e, e, e,e},
    {b,a, e,a, a,k, a, i, a},
    {k, k, k, k, k,k , a,k, k},
    {i, i, i,i,i,i,i,a,i}};
    sostoanie it = a;
    for (char c = '0'; c != EOF; c = getchar ()) {
        int kod = kode (c);
        if (it == d && kod == 1) {count_1++;}
        if (it == e && kod == 3) {count_2++;}
        if (it == k && kod == 6) {count_3++;}
        if (it == i && kod == 7) {count_4++;}
        it = func [it][kod];
    }
    cout << count_1 << " " << count_2 << " " << count_3 << " " << count_4<< endl ;
    return 0;
}