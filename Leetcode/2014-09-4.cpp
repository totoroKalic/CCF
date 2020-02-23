/*
	input:
	10 2 3 3
	1 1
	8 8
	1 5 1
	2 3 3
	6 7 2
	1 2
	2
	2
	6 8
	output:
	29
*/

//最优配餐
//http://118.190.20.162/view.page?gpid=T13

/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

const int N = 1000;
const int TRUE = 1;
struct _direct{
	int drow, drol;
}direct[4] = { { -1, 0 }, { 0, 1 }, { 0, -1 }, { 1, 0 } };

int buyer[N + 1][N + 1];
int visited[N + 1][N + 1];

struct _node{
	int row, rol, step;
	_node(){};
	_node(int a, int b, int c){ row = a, rol = b, step = c; }
};

queue<_node> q;
int buycount = 0;
long long ans = 0;

void bfs(int n){
	_node front, v;

	while (!q.empty()){
		front = q.front();
		q.pop();

		for (int i = 0; i < 4; i++){
			v.row = front.row + direct[i].drow;
			v.rol = front.rol + direct[i].drol;
			v.step = front.step + 1;

			if (v.row > n || v.row < 1 || v.rol > n || v.rol < 1)
				continue;
			if (visited[v.row][v.rol])
				continue;
			if (buyer[v.row][v.rol] > 0){
				visited[v.row][v.rol] = 1;
				ans += buyer[v.row][v.rol]*v.step;
				if (--buycount == 0)
					return ;
			}

			visited[v.row][v.rol] = 1;
			q.push(v);
		}
	}
}


int main(){
	int n, m, k, d, x, y, c;

	cin >> n >> m >> k >> d;

	memset(buyer,0,sizeof(buyer));
	memset(visited,0,sizeof(visited));
	//分店
	for (int i = 0; i < m; i++){
		cin >> x >> y;
		q.push(_node(x, y, 0));
		visited[x][y] = TRUE;
	}
	//客户
	for (int i = 0; i < k; i++){
		cin >> x >> y;
		cin >> c;
		if (buyer[x][y] == 0)
			buycount++;
		buyer[x][y] += c;
	}
	 
	for (int i = 0; i < d; i++){
		cin >> x >> y;
		visited[x][y] = TRUE;
	}

	bfs(n);

	cout << ans << endl;
	return 0;
}
*/