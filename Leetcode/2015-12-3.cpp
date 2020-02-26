/*
	input:
	4 2 3
	1 0 0 B
	0 1 0 2 0
	1 0 0 A
	output:
	AAAA
	A--A
	input:
	16 13 9
	0 3 1 12 1
	0 12 1 12 3
	0 12 3 6 3
	0 6 3 6 9
	0 6 9 12 9
	0 12 9 12 11
	0 12 11 3 11
	0 3 11 3 1
	1 4 2 C
	output:
	................
	...+--------+...
	...|CCCCCCCC|...
	...|CC+-----+...
	...|CC|.........
	...|CC|.........
	...|CC|.........
	...|CC|.........
	...|CC|.........
	...|CC+-----+...
	...|CCCCCCCC|...
	...+--------+...
	................
*/

//»­Í¼
//http://118.190.20.162/view.page?gpid=T35

/*
#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 100;

char number[MAX+1][MAX+1];

const int MAX_SIZE = 4;

struct _dirt{
	int a, b;
}dirt[4] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };


int Min(int a, int b){
	if (a < b)
		return a;
	else
		return b;
}

int Max(int a, int b){
	if (a < b)
		return b;
	else
		return a;
}

void draw(int x1, int y1, int x2, int y2, int n, int m){
	int max, min;
	if (x1 == x2){
		min = m - 1 - Max(y1, y2);
		max = m - 1 - Min(y1, y2);
		for (int i = min; i <= max; i++){
			if (number[i][x1] == '-' || number[i][x1] == '+')
				number[i][x1] = '+';
			else
				number[i][x1] = '|';
		}
	}
	else{
		min = Min(x1, x2);
		max = Max(x1, x2);
		for (int i = min; i <= max; i++){
			if (number[m - 1 - y1][i] == '|' || number[m - 1 - y1][i] == '+')
				number[m - 1 - y1][i] = '+';
			else
				number[m - 1 - y1][i] = '-';
		}
	}
}

void fill(int n, int m, int a, int b, char C){
	int nextx, nexty, j;
	
	for (j = 0; j < MAX_SIZE; j++){
		nexty = b + dirt[j].b;
		nextx = a + dirt[j].a;

		if (0 <= nextx && nextx < m && nexty >= 0 && nexty < n && number[nextx][nexty] != '-' && number[nextx][nexty] != '+' && number[nextx][nexty] != '|' && number[nextx][nexty] != C){
			number[nextx][nexty] = C;
			fill(n, m, nextx, nexty, C);
		}
	}

}


int main(){
	int n, m, k, demo;
	cin >> n >> m >> k;
	memset(number, '.', sizeof(number));

	for (int i = 0; i < k; i++){
		cin >> demo;
		if (demo == 0){
			int Start_X, Start_Y, End_X, End_Y;
			cin >> Start_X >> Start_Y >> End_X >> End_Y;
			draw(Start_X, Start_Y, End_X, End_Y, n, m);
		}
		else if (demo == 1){
			int X, Y, start_x;
			char temp;
			cin >> X >> Y >> temp;
			start_x = m - 1 - Y;

			fill(n, m, start_x, X, temp);
		}
	}


	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			cout << number[i][j];
		cout << endl;
	}

	return 0;
}
*/