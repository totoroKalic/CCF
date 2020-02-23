/*
	use cirl+F5 to run it
	use class map to build hash function
	input:
	5
	1 2 3 -1 -2
	output:
	2
*/

//Ïà·´Êı
//http://118.190.20.162/view.page?gpid=T10

/*
#include <iostream>
#include <map>
#include <cstring>
#include <math.h>

using namespace std;

const int N = 500;
int data[N+1];

int main(){
	map<int, int> number;
	memset(data, 0, sizeof(number));
	int n, v,count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	for (int i = 0; i < n; i++){
		if (data[i] > 0)
			number.insert(pair<int, int>(data[i], 1));
	}
		
	for (int i = 0; i < n; i++){
		if (data[i] < 0){
			map<int, int >::iterator it;
			it = number.find(abs(data[i]));
			if (it != number.end())
				count++;
		}
	}

	cout << count << endl;
	return 0;
}
*/