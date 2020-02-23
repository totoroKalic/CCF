/*
	input:
	4
	1 5 3 9
	3 7 5 6
	9 4 6 4
	7 3 1 3
	output:
	1 5 3 9 7 3 9 5 4 7 3 6 6 4 1 3
*/

//Z字形扫描
//http://118.190.20.162/view.page?gpid=T20

/*
#include <cstring>
#include <iostream>

using namespace std;

const int N = 500;
int number[N + 1][N + 1];

const int EAST = 0;
const int SOUTH = 1;
const int WESTSOUTH = 2;
const int EASTNORTH = 3;

struct _direct{
	int drow, dcol;
}direct[4] = { { 0, 1 }, { 1, 0 }, { 1, -1 }, { -1, 1 } };


int main(){
	int n, a, b, c, d;
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> number[i][j];

	int x = 0, y = 0, next = EAST;
	cout << number[x][y];
	while (x != n-1 || y != n-1){	//!!!!!!!!两个都到n-1时才能停止循环
		x += direct[next].drow;
		y += direct[next].dcol;
		cout << " " << number[x][y];
		//cout << x <<" "<< y <<" "<< number[x][y] << endl;

		if (next == EAST && x == 0)//1
			next = WESTSOUTH;
		else if (next == WESTSOUTH && y == 0 && x != n-1)//2
			next = SOUTH;
		else if (next == SOUTH && y == 0)//3
			next = EASTNORTH;
		else if (next == EASTNORTH && x == 0 && y != n - 1)//4 //!!!!
			next = EAST;
		else if (next == EASTNORTH && y == n - 1)//5
			next = SOUTH;
		else if (next == SOUTH && y == n - 1)//6
			next = WESTSOUTH;
		else if (next == WESTSOUTH && x == n - 1)//7
			next = EAST;
		else if (next == EAST && x == n-1)//8
			next = EASTNORTH;	
	}
	cout << endl;

	return 0;
}
*/
