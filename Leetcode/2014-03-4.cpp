/*
	use cirl+F5 to run it
	input:
	5 3 1 3
	0 0
	5 5
	0 3
	0 5
	3 5
	3 3
	4 4
	3 0
	output:
	2
*/

//http://118.190.20.162/view.page?gpid=T7

/*
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 200;

struct _point{
	long long point_X, point_Y;
}point[MAXN+1];

struct _status{
	long long point_X, point_Y;
	int step, kcount;
};

bool visited[MAXN + 1];

int bfs(int n, int m, int k, int begin, int end, long long r){
	int max;
	//init data
	memset(visited, false, sizeof(visited));
	_status start, front, v;
	start.point_X = point[begin].point_X;
	start.point_Y = point[begin].point_Y;
	start.step = 0;
	start.kcount = 0;
	queue<_status> q; //Al bfs need a queue
	q.push(start);
	visited[begin] = true;
	while (!q.empty()){
		front = q.front();
		q.pop();
		//finish if to the end
		if (front.point_X == point[end].point_X && front.point_Y == point[end].point_Y)
			return front.step - 1;
		if (front.kcount == k)
			max = n;
		else
			max = n + m;
		for (int i = 0; i < max; i++){
			if (visited[i])
				continue;
			if ((front.point_X - point[i].point_X)*(front.point_X - point[i].point_X) + (front.point_Y - point[i].point_Y)*(front.point_Y - point[i].point_Y) > r*r)
				continue;
			else{
				visited[i] = true;
				v.point_X = point[i].point_X;
				v.point_Y = point[i].point_Y;
				v.step = front.step + 1;
				if (i >= n)
					v.kcount = front.kcount + 1;
				else
					v.kcount = front.kcount;
				q.push(v);

			}
		}
	}
	return 0;
}


int main(){
	int n, m, k;
	long long r;

	cin >> n >> m >> k >> r;
	for (int i = 0; i < n+m; i++){
		cin >> point[i].point_X >> point[i].point_Y;
	}
	//BFS
	int ans = bfs(n, m, k, 0, 1, r);

	cout << ans << endl;
	return 0;
}
*/