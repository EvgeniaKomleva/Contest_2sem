#include <iostream>
using namespace std;

bool mach(string s, string p, int start_s, int start_p){
    if (s[start_s] ==p[start_p]){
        if (s[start_s] == 0 && p[start_p]==0){ return true; }
        else {return mach(s, p, start_s+1, start_p+1);}}
    else if (s[start_s] != 0 && p[start_p]=='?' ){ return mach(s, p, start_s+1, start_p+1);}
    else if (p[start_p] =='*'){
        for (int i = start_s; i <= s.size(); i++){
            if (mach(s, p, i, start_p+1)){
                return true;
            }
        }
    }
}

int main() {
    string s, p;
    cin >> s>>p;
    if (mach(s, p, 0, 0)){printf( "YES");}
    else{printf( "NO");}
    return 0;
}