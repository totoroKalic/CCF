/*
	input:
	1 2
	5 2 3 3 1 3 4 2 5 2 3 5
	output:
	3 4
	2 3
	5 3
	1 1
	4 1
*/

//数字排序
//http://118.190.20.162/view.page?gpid=T26

//使用priority_queue优先队列...注意 a < b 是大顶堆
/*
#include <iostream>
#include <queue>
#include <map>

using namespace std;

struct _node{
	int point, count;
	bool operator < (const _node& n) const{
		if (count == n.count)
			return point > n.point;
		return count < n.count;
	}
};

int main(){
	priority_queue<_node> Q;
	map<int, int> m;
	_node temp;
	int n, v;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> v;
		m[v]++;
	}

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++){
		temp.point = it->first;
		temp.count = it->second;
		Q.push(temp);
	}

	while (!Q.empty()){
		temp = Q.top();
		cout << temp.point << " " << temp.count << endl;
		Q.pop();
	}

	return 0;

}
*/

