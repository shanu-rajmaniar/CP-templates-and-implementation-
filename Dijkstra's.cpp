class prioritize{
    public: 
    bool operator()(pair<int, int> p1, pair<int ,int> p2){
        return p1.second > p2.second;
    }
};

// input in the form of {node, weight}
vector<vector<pair<int, int>>> g;
vector<ll> dist;
bool vis[100100];
//int parent[100100]; // for finding path

void dijkstra(int sc){
    for(int i = 1;i <= n;i++){
        dist[i] = 1e18;
        vis[i] = 0;
}

dist[sc] = 0;
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, prioritize>pq;
pq.push({sc, 0});
while(!pq.empty()){
        pair<ll, ll> fs = pq.top(); pq.pop();

        if(vis[fs.first])continue;
        vis[fs.first] = 1;

        for(auto v : g[fs.first]){
            int neigh = v.first;
            int wt = v.second;
            if(dist[neigh] > dist[fs.first] + wt){
                //parent[v.first] = fs.first; // for finding path
                dist[neigh] = dist[fs.first] + wt;
                pq.push({neigh, dist[neigh]});
            }
        }
    }
}
