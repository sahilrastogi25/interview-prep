bool checkCycle(int node, int parent, vector<int>&vis, vector<int>adj[], int v) {
	vis[node] = 1;
	for (auto it : adj[node]) {
		if (!vis[it]) {
			if (checkCycle(it, node, vis, adj, v)) {
				return true;
			}
		} else if (it != parent) {
			return true;
		}
	}
	return false;
}

bool isCycle(int v, vector<int>adj[])
{
	// Code here
	vector<int>vis(v + 1, 0);
	for (int i = 0; i < v; i++) {
		if (!vis[i]) {
			if (checkCycle(i, -1, vis, adj, v)) {
				return true;
			}
		}
	}
	return false;
}