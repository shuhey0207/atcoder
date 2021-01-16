#include <bits/stdc++.h>
using namespace std;

class UnionFind{
public:
    UnionFind(int n):r(n,-1){}

	// xの根を返す
    int root(int x){
        if(r[x] < 0){return x;}
        return r[x] = root(r[x]);
    }
	// 木を併合
    void unite(int x, int y){
		x = root(x);
		y = root(y);
		if (x == y) return;
		if (r[x] > r[y]) {swap(x, y);}
		r[x] += r[y];
		r[y] = x;
		return;
    }

	// 根が同じか
	bool united(int x, int y){
		return root(x) == root(y);
	}

	int size(int x) {return -r[root(x)];}
    int max(){return -(*min_element(r.begin(), r.end()));}

private:
    vector<int> r;
};
