/*
---one---
input:
7
1 2
2 1
0 0
1 1
1 0
2 0
0 1
output:
0
0
1
0
0
---two---
input:
2
0 0
-100000 10
output:
0
0
0
0
0
---three---
input:
11
9 10
10 10
11 10
12 10
13 10
11 9
11 8
12 9
10 9
10 11
12 11
output:
0
2
1
0
0
*/

//ªÿ ’’æµÿ÷∑
//http://118.190.20.162/view.page?gpid=T99

/*
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

struct Point{
	int x;
	int y;
	bool operator ==(const Point& n)const{
		if (x == n.x && y == n.y)
			return true;
		else
			return false;
	}
};
struct _direct{
	int x;
	int y;
};

_direct direct[4] = { { -1, 0 }, { 0, 1 }, { 1, 0 }, { 0, -1 } };
_direct toward[4] = { { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 } };
int result[5];
Point demo;

int main(){
	//init
	vector<Point> Apoint;
	vector<Point> Spoint;
	memset(result, 0, sizeof(result));
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> demo.x >> demo.y;
		Apoint.push_back(demo);
	}

	for (int i = 0; i < n; i++){
		int count = 0;
		for (int j = 0; j < 4; j++){
			demo.x = Apoint[i].x + direct[j].x;
			demo.y = Apoint[i].y + direct[j].y;
			vector<Point>::iterator iter;
			iter = find(Apoint.begin(), Apoint.end(), demo);
			if (iter != Apoint.end())
				count++;
		}
		if (count == 4)
			Spoint.push_back(Apoint[i]);
	}

	int len = Spoint.size();
	for (int i = 0; i < len; i++){
		int count = 0;
		for (int j = 0; j < 4; j++){
			demo.x = Spoint[i].x + toward[j].x;
			demo.y = Spoint[i].y + toward[j].y;
			vector<Point>::iterator iter;
			iter = find(Apoint.begin(), Apoint.end(), demo);
			if (iter != Apoint.end())
				count++;
		}
		result[count]++;
	}
	for (int i = 0; i < 5; i++)
		cout << result[i] << endl;

	return 0;
}
*/
