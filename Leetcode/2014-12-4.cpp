/*
	input:
	4 4
	1 2 1
	2 3 4
	2 4 2
	3 4 3
	output:
	6
*/

//���Ź��
//http://118.190.20.162/view.page?gpid=T18

//ʹ��kruskal �� prim�㷨���м���
//kruskal �Ǳ�Ϊ���� ������father��������С������������
//prim �ǵ�Ϊ����

/*
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Edge{
	int from, to, weight;
	Edge(){};
	Edge(int a, int b, int c) :from(a), to(b), weight(c){}
};

const int MaxN = 1000;

vector<Edge> edge;
int father[MaxN];

bool cmp(Edge a,Edge b){
	return a.weight < b.weight;
}

int find(int x){
	return x == father[x] ? x : find(father[x]);
}

int main(){
	int n, m, ans = 0,count = 0;
	Edge temp;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++)
		father[i] = i;
	for (int i = 0; i < m; i++){
		cin >> temp.from >> temp.to >> temp.weight;
		edge.push_back(temp);
	}
	sort(edge.begin(), edge.end(), cmp);

	for (int i = 0; i < edge.size(); i++){
		//find function ???
		int x = find(edge[i].from);
		int y = find(edge[i].to);
		int cost = edge[i].weight;

		//������ͬ����ͨ����
		if (x != y){
			ans += cost;
			count++;
			father[x] = y; // ��������������
		}
		if (count == n - 1){
			cout << ans << endl;
			return 0;
		}
	}
}
*/