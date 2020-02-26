/*
	input:
	5 5
	1 2
	2 3
	3 4
	4 2
	3 5
	output:
	3
*/

//���ٹ�·
//http://118.190.20.162/view.page?gpid=T29

/*
	�ⷨ��
	Tarjan�㷨-������ͼG�У����������������ٴ���һ��·��������������ǿ��ͨ��
							�������ͼG��ÿ�������㶼ǿ��ͨ����G��һ��ǿ��ͨͼ����ǿ��ͨͼ����ͼ�ļ���ǿ��ͨ��ͼ����Ϊǿ��ͨ������

*/

/*
#include <iostream>
#include <list>
#include <stack>

using namespace std;

const int NIT = -1;
int ans = 0;

class Graph{
	int V;
	list<int> *adj;
	void TarjanUtil(int i, int disc[], int low[], stack<int> *st, bool stackMember[]);
	int min(int a, int b);

public:
	Graph(int v);
	void addEdge(int v, int w);
	void Tarjan();

};

Graph::Graph(int v){
	this->V = v;
	adj = new list<int>[V];
}

void Graph::addEdge(int a, int b){
	adj[a].push_back(b);
}

int Graph::min(int a, int b){
	if (a > b)
		return b;
	else
		return a;
}

void Graph::TarjanUtil(int i, int disc[], int low[], stack<int> *st, bool stackMember[]){
	static int time = 0;
	disc[i] = low[i] = ++time;
	st->push(i);
	stackMember[i] = true;
	list<int>::iterator it;

	for (it = adj[i].begin(); it != adj[i].end(); it++){
		int v = *it;
		if (disc[v] == -1){
			TarjanUtil(v, disc, low, st, stackMember);
			low[i] = min(low[v], low[i]);
		}
		else if (stackMember[v] == true)
			low[i] = min(disc[v], low[i]);
	}
	
	int w = 0;
	int count = 0;
	if (low[i] == disc[i]){
		while (st->top() != i){
			w = (int)st->top();
			count++;
			stackMember[w] = false;
			st->pop();
		}
		w = (int)st->top();
		count++;
		stackMember[w] = false;
		st->pop();
	}
	if (count > 1)
		ans += (count*(count - 1)) / 2;
}


void Graph::Tarjan(){
	int *disc = new int[V]; //�Ƿ���ʹ�
	int *low = new int[V]; //Lowֵ
	bool *stackMember = new bool[V]; //�Ƿ��ڶ�ջ��	
	stack<int> *st = new stack<int>();

	for (int i = 0; i < V; i++){
		disc[i] = NIT;
		low[i] = NIT;
		stackMember[i] = false;
	}

	for (int i = 0; i < V; i++){
		if (disc[i] == NIT)
			TarjanUtil(i, disc, low, st, stackMember);
	}
}


int main(){
	int n, m,src,end;
	cin >> n >> m;
	Graph gra(n+1);

	for (int i = 0; i < m; i++){
		cin >> src >> end;
		gra.addEdge(src, end);
	}

	gra.Tarjan();

	cout << ans << endl;

	return 0;

}
*/