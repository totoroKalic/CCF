/*
	input:
	6
	10 1 10 20 30 20
	output:
	10
*/

//http://118.190.20.162/view.page?gpid=T5

/*
#include <iostream>
#include <map>

using namespace std;

const int N = 1000;
int number[N + 1];

int main(){
	int n, v;
	map<int, int> m;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> v;	//³õÊ¼Ê±Îª0
		m[v]++;
	}

	int ans, count = 0;
	for (map<int, int>::iterator t = m.begin(); t!= m.end(); t++){
		if (t->second > count){
			count = t->second;
			ans = t->first;
		}
	}

	cout << ans << endl;
	return 0;
}
*/