void dfs(int node, vector<int>&storeDfs, vector<int>&vis, vector<int> adj[]) {
	storeDfs.push_back(node);
	vis[node] = 1;
	for (auto it : adj[node]) {
		if (!vis[it]) {
			dfs(it, storeDfs, vis, adj);
		}
	}
}
vector<int>dfsOfGraph(int V, vector<int> adj[])
{
	// Code here
	vector<int>storeDfs;
	vector<int>vis(V + 1, 0);
	for (int i = 0; i < V; i++) {
		if (!vis[i]) {
			dfs(i, storeDfs, vis, adj);
		}
	}
	return storeDfs;
}