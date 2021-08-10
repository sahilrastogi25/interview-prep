int n, m;
cin >> n >> m;
vector<vector<int>>adj(n + 1, vector<int>(n + 1, 0));
for (int i = 0; i < m; i++) {
	int u, v;
	cin >> u >> v;
	adj[u][v] = 1;
	adj[v][u] = 1;
}
for (auto rows : adj) {
	for (int x : rows) {
		cout << x << " ";
	} cout << endl;
}