/*
	input:
	4 5
	1 2 4
	1 3 5
	2 3 2
	2 4 3
	3 4 2
	output:
	11
*/

//交通规划
//http://118.190.20.162/view.page?gpid=T44

//用堆的思想进行存储
//下面是传统的dijkstra算法，这道题目并不适用
/*
#include <iostream>
#include <queue> //priority queue
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 10001;

struct _node{
	int point, value;
	_node(){};
	_node(int a, int b){ point = a; value = b; }
	bool operator<(const _node n) const{
		if (value == n.value)
			return point < n.point;
		else
			return value > n.value;
	}
};

vector<_node> e[MAX]; //邻接表
int dis[MAX];  
priority_queue<_node> q; //优先队列

void dijkstra(int a){
	_node temp;
	while (!q.empty()){
		temp = q.top();
		q.pop();
		for (int i = 0; i < e[temp.point].size(); i++){
			_node demo = e[temp.point][i];
			if (dis[demo.point] >= dis[temp.point] + demo.value){
				dis[demo.point] = dis[temp.point] + demo.value;
				q.push(_node(demo.point, dis[demo.point]));
			}
		}
	}
}



int main(){
	int n, m, start, end, value;
	int ans = 0;
	cin >> n >> m;

	for (int i = 0; i < m; i++){
		cin >> start >> end >> value;
		e[start].push_back(_node(end,value));
		e[end].push_back(_node(start,value));
	}
	memset(dis, 0x3f, sizeof(dis));
	dis[1] = 0; //第一个节点到自己的距离为0
	q.push(_node(1, dis[1]));
	dijkstra(1);

	for (int i = 1; i <= n; i++){
		cout << "i: " << dis[i] << endl;
	}

	return 0;
}
*/
/*
#include <iostream>
#include <queue> //priority queue
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 10001;

struct _node{
	int point, value;
	_node(){};
	_node(int a, int b){ point = a; value = b; }
	bool operator<(const _node n) const{
		if (value == n.value)
			return point < n.point;
		else
			return value > n.value;
	}
};

vector<_node> e[MAX]; //邻接表
int dis[MAX];
int path[MAX];
int cost[MAX];
int ans = 0;
priority_queue<_node> q; //优先队列

void dijkstra(int a){
	_node temp;
	while (!q.empty()){
		temp = q.top();
		q.pop();
		for (int i = 0; i < e[temp.point].size(); i++){
			_node demo = e[temp.point][i];
			if (dis[demo.point] > dis[temp.point] + demo.value){
				dis[demo.point] = dis[temp.point] + demo.value;
				path[demo.point] = temp.point;
				cost[demo.point] = demo.value; //answer;
				q.push(_node(demo.point, dis[demo.point]));
			}
			if (dis[demo.point] == dis[temp.point] + demo.value){
				cost[demo.point] = min(cost[demo.point], demo.value); //answer;
			}
		}
	}
}

int main(){
	int n, m, start, end, value;
	cin >> n >> m;

	for (int i = 0; i < m; i++){
		cin >> start >> end >> value;
		e[start].push_back(_node(end, value));
		e[end].push_back(_node(start, value));
	}
	memset(dis, 0x3f, sizeof(dis));
	memset(path, 0, sizeof(path));
	memset(cost, 0, sizeof(cost));
	dis[1] = 0; //第一个节点到自己的距离为0
	path[1] = -1;
	cost[1] = 0;
	q.push(_node(1, dis[1]));
	dijkstra(1);
	for (int i = 1; i <= n; i++)
		ans += cost[i];

	cout << ans << endl;
	return 0;
}
*/