ll arr[100100];
ll t[400400];

struct node {

};

node merge() {

}

void build(ll index, ll l, ll r) {
    if(l == r) {
        t[index] = arr[l];
        return;
    }
    ll mid = (l + r) / 2;
    build(2 * index, l, mid);
    build(2 * index + 1, mid + 1, r);
    t[index] = t[2 * index] + t[2 * index + 1];
}

void update(ll index, ll l, ll r, ll pos, ll val) {
    if(pos < l || pos > r) {
        return;
    }
    if(l == r) {
        t[index] = val;
        arr[l] = val;
        return;
    }
    ll mid = (l + r) / 2;
    update(2 * index, l, mid, pos, val);
    update(2 * index + 1, mid + 1, r, pos, val);
    t[index] = t[2 * index] + t[2 * index + 1];
}
