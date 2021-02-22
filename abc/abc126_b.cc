#include <bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin >> s;
    int fh = s/100;
    int sh = s%100;
    bool yymm;
    bool mmyy;

    if(fh <= 12 && fh > 0) mmyy = true;
    else mmyy = false;

    if(sh <= 12 && sh > 0) yymm = true;
    else yymm = false;

    string ans;
    if(mmyy && yymm){
        ans = "AMBIGUOUS";
    }
    else if(mmyy){
        ans = "MMYY";
    }
    else if(yymm){
        ans = "YYMM";
    }
    else{
        ans = "NA";
    }

    cout << ans << endl;

    return 0;
}