/*
	use cirl+F5 to run it

	input:
	3 4
	0 0 4 4
	1 1 5 5
	2 2 6 6
	1 1
	0 0
	4 4
	0 5
	output:
	2
	1
	1
	IGNORED
*/

//http://118.190.20.162/view.page?gpid=T9

/*
#include <iostream>

using namespace std;

const int N = 10;

struct _picture{
	int picture_Num;
	int Left_X, Left_Y, Right_X, Right_Y;
}picture[N];

struct _point{
	int X, Y;
}point[N];

int order[N]; 

int main(){
	//input the init date
	int NumPicture_M, NumPoint_N;
	cin >> NumPicture_M >> NumPoint_N;
	for (int i = 0; i < NumPicture_M; i++){
		picture[i].picture_Num = i+1;
		cin >> picture[i].Left_X >> picture[i].Left_Y >> picture[i].Right_X >> picture[i].Right_Y;
	}
	for (int i = 0; i < NumPoint_N; i++){
		cin >> point[i].X >> point[i].Y;
	}
	for (int i = 0; i < NumPicture_M; i++){
		order[i] = NumPicture_M - i - 1;
	}

	int Picture_Num, temp;
	for (int i = 0; i < NumPoint_N; i++){
		Picture_Num = -1;
		for (int j = 0; j < NumPicture_M; j++){
			if (picture[order[j]].Left_X <= point[i].X && picture[order[j]].Right_X >= point[i].X && picture[order[j]].Left_Y <= point[i].Y && picture[order[j]].Right_Y >= point[i].Y){
				Picture_Num = picture[order[j]].picture_Num;
				temp = order[j];
				for (int k = j; k > 0; k--){
					order[k] = order[k - 1];
				}
				order[0] = temp;

				break;
			}
		}
		
		if (Picture_Num == -1)
			cout << "IGNORED" << endl;
		else
			cout << Picture_Num << endl;
	}

	return 0;
}
*/