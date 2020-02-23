/*
	input:
		4
	output:
		3
*/

//ÓÐÈ¤µÄÊý
//http://118.190.20.162/view.page?gpid=T2

/*
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

const long long MOD = 1000000007;
const int MAX_NUMBER = 1000;
const int MAX_ARRAY = 5;
long long status[MAX_NUMBER + 1][MAX_ARRAY + 1];

int main(){
	int num;
	cin >> num;

	memset(status, 0, sizeof(status));
	status[1][0] = 1;//s1 length = 1

	for (int i = 2; i <= num; i++){
		status[i][0] = 1;//length = 2....i;Only number:2;s1
		status[i][1] = (status[i - 1][1] * 2 + status[i - 1][0]) % MOD;//Only number:2&0; s2
		status[i][2] = (status[i - 1][2] + status[i - 1][0]) % MOD;//Only number:2&3; s3
		status[i][3] = (status[i - 1][3] * 2 + status[i - 1][1]) % MOD;//Only number:2&0&1; S4
		status[i][4] = (status[i - 1][4] * 2 + status[i - 1][1] + status[i - 1][2]) % MOD;//Omly number:2&0&3; s5;
		status[i][5] = (status[i - 1][5] * 2 + status[i - 1][3] + status[i - 1][4]) % MOD;//number:2 0 1 3;S6
	}

	cout << status[num][5] << endl;
	return 0;
}
*/