/*
	input:
	5
	1 2 1 1 3
	output:
	1 1 2 3 1
*/

//http://118.190.20.162/view.page?gpid=T21

/*
#include <iostream>
#include <map>

using namespace std;

const int N = 1000;
const int FIRST = 1;

int main(){
	map<int, int> m;
	int n, v;
	cin >> n;
	for (int i = 0; i < n; i++){
		map<int, int>::iterator it;
		cin >> v;

		it = m.find(v);
		if (it != m.end()){
			it->second += 1;
			cout << it->second << " ";
		}
		else{
			m.insert(pair<int, int>(v, 1));
			cout << FIRST << " ";
		}
	}
	cout << endl;

	return 0;
}
*/