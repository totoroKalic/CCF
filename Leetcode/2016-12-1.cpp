/*
	input:
	6
	2 6 5 6 3 5
	output:
	5
	input:
	4
	3 4 6 7
	output:
	-1
	input:
	5
	3 4 6 6 7
	output:
	-1
*/

//ÖĞ¼äÊı
//http://118.190.20.162/view.page?gpid=T52

/*
#include <iostream>
#include <map>

using namespace std;

int main(){
	int n, m, ans;
	map<int, int> words;
	cin >> n;

	for (int i = 1; i <= n; i++){
		cin >> m;
		words[m]++;
	}
	int mid = (n + 1) / 2;
	int count = 0, left = 0;
	for (map<int, int>::iterator it = words.begin(); it != words.end(); it++){
		if (count + it->second >= mid){
			left = count;
			count = 0;
			ans = it->first;
		}
		else
			count += it->second;
	}

	if (left == count)
		cout << ans << endl;
	else
		cout << -1 << endl;

	return 0;
}
*/