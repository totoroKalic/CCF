/*
	input：
	3 3 3
	2 1 1 1
	1 3 2 10
	2 2 2 10
	output:
	6
*/

//游戏
//http://118.190.20.162/view.page?gpid=T39


/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct _dict{
	int a, b;
}dict[4] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

struct node{
	int row, rol, level;
};

const int MAX = 100;
int visited[MAX + 1][MAX + 1][3*MAX + 1]; //这里记录了总的步数，太大了不行，因为最后步长不会太多，以300为基准（太大会超出256M内存限制）
int answer = 0;

//in order to nrow nrol
void BFS(int n, int m){
	node start, front, v;
	queue<node> q;

	start.row = 1;
	start.rol = 1;
	start.level = 0;
	q.push(start);

	while (!q.empty()){
		front = q.front();
		q.pop();

		if (front.row == n && front.rol == m){
			answer = front.level;
			break;
		}
		for (int i = 0; i < 4; i++){
			v.row = front.row + dict[i].a;
			v.rol = front.rol + dict[i].b;
			v.level = front.level + 1;

			if (v.row < 1 || v.row > n || v.rol < 1 || v.rol > m)
				continue;
			if (visited[v.row][v.rol][v.level] == 0){
				visited[v.row][v.rol][v.level] = 1;
				q.push(v);
			}
		}
	}
}

int main(){
	int n, m, t, r, c, a, b;
	cin >> n >> m >> t;
	memset(visited, 0, sizeof(visited));
	
	for (int i = 0; i < t; i++){
		cin >> r >> c >> a >> b;

		for (int j = a; j <= b; j++)
			visited[r][c][j] = 1;
	}
	
	BFS(n, m);
	cout << answer << endl;

	return 0;
}
*/