/*
We used the for loop in case of any disconnected components in our graph
Ex- 1-2-3-7-5 and 4-6 now these are both disconnected components of a single
graph
*/
vector<int>bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int>bfs;
    vector<int>vis(V + 1, 0);
    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            queue<int>q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                for (auto it : adj[node]) {
                    if (!vis[it]) {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }

    return bfs;
}