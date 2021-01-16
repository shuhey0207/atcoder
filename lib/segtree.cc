
template<typename T>
class SegTree {
    int n_ = 1;                          // 葉の数
    vector<T> data_;                     // データを格納するvector
    T def_;                              // 初期値かつ単位元
    function<T(T, T)> operation_;        // 区間クエリで使う処理
    function<T(T, T)> update_;              // 点更新で使う処理
 
    T query(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l) return def_;
        if (a <= l && r <= b) return data_[k];
        return operation_(query(a, b, 2 * k + 1, l, (l + r) / 2), query(a, b, 2 * k + 2, (l + r) / 2, r));
    }
public:
    // 初期値なし
    SegTree(size_t n, T def, function<T(T, T)> operation, function<T(T, T)> update) : def_(def), operation_(operation), update_(update) {
        while (n_ < n) n_ *= 2;
        data_ = vector<T>(2 * n_ - 1, def_);
    }
    // 初期値あり
    SegTree(vector<T> data, T def, function<T(T, T)> operation, function<T(T, T)> update) : def_(def), operation_(operation), update_(update) {
        while (n_ < data.size()) n_ *= 2;
        data_ = vector<T>(2 * n_ - 1, def_);
        for(int i = 0; i < data.size(); i++) data_[i + n_ - 1] = data[i];
    }

    // 値更新
    void change(int i, T x){
        i += n_ - 1;
        data_[i] = update_(data_[i], x);
        while (i > 0) {
            i = (i - 1) / 2;
            data_[i] = operation_(data_[i * 2 + 1], data_[i * 2 + 2]);
        }
    }
    // 一括構築
    void build(){for(int i = n_ - 1; i >= 0; i--) data_[i] = operation_(data_[i*2+1],data_[i*2+2]);}
    T query(int a, int b) {return query(a, b, 0, 0, n_);}
    T operator[](int i){return data_[i + n_ - 1];}
};