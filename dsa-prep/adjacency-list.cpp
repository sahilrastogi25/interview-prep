int m, n;
cin >> n >> m;
vector<int>g[n + 1];
for (int i = 0; i < m; i++) {
	int u, v;
	cin >> u >> v;
	g[u].push_back(v);
	g[v].push_back(u);
}
for (int i = 1; i <= n; i++) {
	cout << i << "->";
	for (int j = 0; j < g[i].size(); j++) {
		cout << g[i][j] << " ";
	} cout << endl;
}