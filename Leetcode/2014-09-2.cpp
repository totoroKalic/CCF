/*
	use Cirl+F5 to run it
	input:
	2
	1 1 4 4
	2 3 6 5
	output:
	15
*/

//»­Í¼
//http://118.190.20.162/view.page?gpid=T15

/*
#include <iostream>
#include <cstring>

using namespace std;

const int N = 100;
bool flag[N][N];

int main(){
	int n,count = 0;
	int start_x, start_y, end_x, end_y;
	cin >> n;
	memset(flag,false, sizeof(flag));

	for (int i = 0; i < n; i++){
		cin >> start_x >> start_y >> end_x >> end_y;
		for (int i = start_x; i < end_x; i++){
			for (int j = start_y; j < end_y; j++){
				if (!flag[i][j]){
					flag[i][j] = true;
					count += 1;
				}
			}
		}
	}
	cout << count << endl;

	return 0;
}
*/