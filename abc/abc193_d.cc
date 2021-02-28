#include <bits/stdc++.h>
using namespace std;

struct Deck{
    Deck(int k) : sum(k*9), num(10, k){};
    int sum;
    vector<int> num;
    double draw(int x){
        if(num[x]==0) return 0;
        double ret = (double)num[x]/sum;
        num[x]--;sum--;
        return ret;
    }
};

int main()
{
    int k;
    cin >> k;
    string s,t;
    cin >> s >> t;
    Deck D(k);
    for(int i = 0; i < 4; i++) D.draw(s[i]-'0');
    for(int i = 0; i < 4; i++) D.draw(t[i]-'0');

    double ans = 0;
    for(int i = 1; i < 10; i++){
        s[4] = i+'0';
        for(int j = 1; j < 10; j++){
            t[4] = j+'0';
            int ss = 0;
            int ts = 0;
            for(int k = 1; k < 10; k++){
                ss += k * pow(10, count(s.begin(), s.end(), '0' + k));
                ts += k * pow(10, count(t.begin(), t.end(), '0' + k));
            }
            if(ss > ts){
                Deck d = D;
                ans += d.draw(i) * d.draw(j);
            }
        }
    }

    cout << setprecision(16) << ans << endl;
    return 0;
}