/*
	input:
	4 5
	2 2 3 1 2
	3 4 5 1 4
	2 3 2 1 3
	2 2 2 4 4
	output:
	2 2 3 0 2
	3 4 5 0 4
	2 3 2 0 3
	0 0 0 4 4
	input:
	4 5
	2 2 3 1 2
	3 1 1 1 1
	2 3 2 1 3
	2 2 3 3 3
	output:
	2 2 3 0 2
	3 0 0 0 0
	2 3 2 0 3
	2 2 0 0 0
*/

//Ïû³ıÀàÓÎÏ·
//http://118.190.20.162/view.page?gpid=T36

/*
#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 30;
int number[MAX][MAX];
int flag[MAX][MAX];

int main(){
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			cin >> number[i][j];
	}

	memset(flag, 0, sizeof(flag));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m - 2; j++)
			if (number[i][j] == number[i][j + 1] && number[i][j + 1] == number[i][j + 2])
				flag[i][j] = flag[i][j + 1] = flag[i][j + 2] = 1;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n - 2; j++)
			if (number[j][i] == number[j + 1][i] && number[j + 1][i] == number[j + 2][i])
				flag[j][i] = flag[j + 1][i] = flag[j + 2][i] = 1;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (flag[i][j] == 1)
				cout << "0" << " ";
			else
				cout << number[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
*/
