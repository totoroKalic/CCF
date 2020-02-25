/*
	input:
	2015
	80
	output:
	3
	21
*/

//ÈÕÆÚ¼ÆËã
//http://118.190.20.162/view.page?gpid=T31

/*
#include <iostream>

using namespace std;

int main(){
	int n, m, flag, count = 0;
	int day[2][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
	};

	cin >> n >> m;

	if (n % 400 == 0 || n % 4 == 0 && n % 100 != 0)
		flag = 1;
	else
		flag = 0;

	for (int i = 1; i <= 12; i++){
		count += day[flag][i];
		if (count >= m){
			cout << i << endl;
			cout << (m - (count - day[flag][i])) << endl;
			break;
		}
	}

	return 0;
}
*/