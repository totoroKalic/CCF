/*
	input:
	4
	2 5 4 2
	output:
	1 2
	6 7 8 9 10
	11 12 13 14
	3 4
*/

//»ð³µ¹ºÆ±
//http://118.190.20.162/view.page?gpid=T46s

/*
#include <iostream>
#include <cstring>

using namespace std;

int seats[20][5];

int find_row(int v){
	int temp;
	for (int i = 0; i < 20; i++){
		temp = 0;
		for (int j = 0; j < 5; j++){
			if (seats[i][j] == 0)
				temp++;
		}
		if (temp >= v)
			return i;
	}
	return -1;
}


int main(){
	int n, v, row, rol;
	memset(seats, 0, sizeof(seats));
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> v;
		row = find_row(v);
		if (row != -1){
			for (int j = 0; j < 5; j++){
				if (seats[row][j] == 0){
					rol = j;
					break;
				}
			}
			//cout << "row " << row << "rol " << rol << endl;
			for (int k = rol; k < rol + v; k++){
				seats[row][k] = 1;
				int ans = row * 5 + k + 1;
				cout << ans << " ";
			}
			cout << endl;
		}else{
			int count = 0;
			for (int j = 0; j < 20; j++){
				for (int k = 0; k < 5; k++){
					if (seats[j][k] == 0){
						count++;
						seats[j][k] = 1;
						cout << j * 5 + k + 1 << " ";
					}
					if (count == v)
						break;
				}
			}
			cout << endl;
		}
	}

	return 0;
}
*/