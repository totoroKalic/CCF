/*
	input:
	2 3
	1 5 3
	3 2 4
	output:
	3 4
	5 2
	1 3
*/

//ͼ����ת
//http://118.190.20.162/view.page?gpid=T27

//scanf()��printf()���Ǳ�cin()��cout()�찥
/*
#include <stdio.h>

using namespace std;

const int N = 1000;
int number[N][N];

int main(){
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &number[j][i]);
		}
	}

	for (int i = m-1; i >= 0; i--){
		for (int j = 0; j < n; j++)
			printf("%d ", number[i][j]);
		printf("\n");
	}

	return 0;
}
*/