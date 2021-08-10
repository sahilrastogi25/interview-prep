/*
Here if we find the encounter that we have visited a vertex in a single dfs loop then
return true else if we find that our dfs loop terminates then we have to make our
dfsVis as false
*/
bool checkCycle(int node, int parent, vector<int>&vis, vector<int>&dfsVis, vector<int>adj[], int v) {
	vis[node] = 1;
	dfsVis[node] = 1;
	for (auto it : adj[node]) {
		if (!vis[it]) {
			if (checkCycle(it, node, vis, dfsVis, adj, v)) {
				return true;
			}
		} else if (dfsVis[it]) {
			return true;
		}
	}
	dfsVis[node] = 0;
	return false;
}
bool isCyclic(int v, vector<int>adj[])
{
	vector<int>vis(v + 1, 0);
	vector<int>dfsVis(v + 1, 0);
	for (int i = 0; i < v; i++) {
		if (!vis[i]) {
			if (checkCycle(i, -1, vis, dfsVis, adj, v)) {
				return true;
			}
		}
	}
	return false;
}