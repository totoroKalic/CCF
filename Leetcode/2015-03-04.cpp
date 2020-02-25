/*
	input:
	4 4
	1 2 2
	3 4 4 4
	output:
	4
*/

//网络延迟
//http://118.190.20.162/view.page?gpid=T24

//求树的直径，用两次DFS或BFS

//这里用的是DFS
/*
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX_N = 20003;
int length, point;
int visited[MAX_N];
vector<int> tree[MAX_N];

void dfs(int a,int b){
	visited[a] = 1;
	if (length < b){
		length = b;
		point = a;
	}
	for (int i = 0; i < tree[a].size(); i++){
		if (!visited[tree[a][i]])
			dfs(tree[a][i], b + 1);
	}
}

int main(){
	int n, m, v;
	cin >> n >> m;
	for (int i = 2; i <= n + m; i++){
		cin >> v;
		tree[i].push_back(v);
		tree[v].push_back(i);
	}

	memset(visited, 0, sizeof(visited));
	length = -1;
	dfs(1, 0);
	length = -1;
	memset(visited, 0, sizeof(visited));
	dfs(point, 0);
	cout << length << endl;

	return 0;
}
*/