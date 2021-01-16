#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = 1 << n;
    vi a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    auto left = max_element(a.begin(), a.begin() + (n/2));
    auto right = max_element(a.begin() + (n/2), a.end());

    if(min(*left,*right) == *left){
        cout << distance(a.begin(), left) + 1 << endl;
    }else{
        cout << distance(a.begin(), right) + 1 << endl;
    }

    return 0;
}