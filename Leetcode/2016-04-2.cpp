/*
	input:
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 1 0 0
	0 0 0 0 0 0 1 0 0 0
	0 0 0 0 0 0 1 0 0 0
	1 1 1 0 0 0 1 1 1 1
	0 0 0 0 1 0 0 0 0 0
	0 0 0 0
	0 1 1 1
	0 0 0 1
	0 0 0 0
	3
	output:
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 1 0 0
	0 0 0 0 0 0 1 0 0 0
	0 0 0 0 0 0 1 0 0 0
	1 1 1 1 1 1 1 1 1 1
	0 0 0 0 1 1 0 0 0 0
*/

//����˹����
//http://118.190.20.162/view.page?gpid=T41


//ע��������⣬�������߿���Ǵ�1��ʼ�����ģ������ڹ��캯��ʱ��0��ʼ��...һ��Ҫע����һ��
//������ԭ�������϶�һ��1����ֹ������������
/*
#include <iostream>

using namespace std;

int Key_board[16][11];
int New_add[5][5];

struct Node{
	int a, b;
};

int main(){
	int n;
	Node node[17];

	for (int i = 0; i < 15; i++){
		for (int j = 0; j < 10; j++)
			cin >> Key_board[i][j];
	}

	for (int j = 0; j < 10; j++){
		Key_board[15][j] = 1;
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++)
			cin >> New_add[i][j];
	}

	cin >> n;

	int number = 0;
	for (int i = 3; i >= 0; i--){
		for (int j = 0; j < 4; j++){
			if (New_add[i][j] == 1){
				node[number].a = i;
				node[number].b = j;
				number++;
			}
		}
	}

	int row = 1;
	bool checkflag;
	for (;;){
		checkflag = false;
		for (int i = 0; i < 4; i++){
			if (Key_board[row + node[i].a][n - 1 + node[i].b] == 1){
				cout << "row: " << row + node[i].a << "rol: " << n - 1 + node[i].b << endl;
				checkflag = true;
				break;
			}
		}
		if (checkflag)
			break;

		row++;
	}
	row--;
	for (int i = 0; i < 4; i++){
		Key_board[row + node[i].a][n - 1 + node[i].b] = 1;
	}

	for (int i = 0; i <15; i++){
		for (int j = 0; j <10; j++){
			cout << Key_board[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
*/