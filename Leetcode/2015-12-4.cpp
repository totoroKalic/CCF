/*
	input:
	4 5
	1 2
	1 3
	1 4
	2 4
	3 4
	output:
	1 2 4 1 3 4
	input:
	4 6
	1 2
	1 3
	1 4
	2 4
	3 4
	2 3
	output:
	-1
*/

//送货
//http://118.190.20.162/view.page?gpid=T34


//使用DFS或并查集来判断是否是连通图
//题意是 是否存在欧拉路径
//满足以下的两个条件
//欧拉通路:图连通；图中只有2个度为奇数的节点(就是欧拉通路的2个端点)
//欧拉回路:图连通；图中所有节点度均为偶数


//最后没跑出来，只拿到了80分.......

/*
#include <iostream>
#include <set>
#include <cstring>
#include <stack>


using namespace std;

const int N = 10000;



class Graph{
	int V;
	set<int> adj[N + 5];
	int flag_connect = 0;
	bool visited[N + 5];
	bool visit[N + 5][N + 5];
	stack<int> path;

public:
	Graph(int n);
	void insertEdge(int a, int b);
	bool isConnect();	
	void dfs_connect(int a);
	bool isOularout();
	void minRoute();
	void dfs_route(int a);
};


Graph::Graph(int n){
	this->V = n;
}


//初始化邻接表

void Graph::insertEdge(int a, int b){
	adj[a].insert(b);
	adj[b].insert(a);
}


//用dfs判断是否联通

void Graph::dfs_connect(int a){
	flag_connect++;
	visited[a] = true;
	for (set<int>::iterator it = adj[a].begin(); it != adj[a].end(); it++){
		int n = *it;
		if (visited[n] != true){
			dfs_connect(n);
		}
	}
}


//	是否是连通

bool Graph::isConnect(){
	memset(visited, false, sizeof(visited));
	dfs_connect(1);
	if (V == flag_connect)
		return true;
	else
		return false;
}


//	是否存在欧拉路径

bool Graph::isOularout(){
	int count = 0;
	for (int i = 1; i <= V; i++){
		if (adj[i].size() % 2 == 1)
			count++;
	}
	
	if ((count == 2 && adj[1].size() % 2 == 1) || count == 0)
		return true;
	else
		return false;
}


//dfs route

void Graph::dfs_route(int a){
	for (set<int>::iterator it = adj[a].begin(); it != adj[a].end(); it++){
		if (visit[a][*it] == false){
			visit[a][*it] = true;
			visit[*it][a] = true;
			dfs_route(*it);
		}
	}
	path.push(a);
}


//	求出欧拉最小路径

void Graph::minRoute(){
	int i;
	memset(visit, false, sizeof(visit));

	dfs_route(1);
	while (!path.empty()){
		cout << path.top() << " ";
		path.pop();
	}
	cout << endl;
}



int main(){
	int n, m, start, end;
	cin >> n >> m;
	Graph gra(n);

	for (int i = 0; i < m; i++){
		cin >> start >> end;
		gra.insertEdge(start, end);
	}
	
	//gra.readAdj();

	if (gra.isConnect() == false)
		cout << -1 << endl;
	else{
		if (gra.isOularout() == false)
			cout << -1 << endl;
		else
			gra.minRoute();
	}
	
	return 0;
}
*/
