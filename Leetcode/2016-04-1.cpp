/*
	input:
	7
	5 4 1 2 3 6 4
	output:
	2
*/

//ÕÛµã¼ÆÊı
//http://118.190.20.162/view.page?gpid=T42

/*
#include <iostream>

using namespace std;

const int N = 1000;
int number[N + 1];

int main(){
	int n, m;
	cin >> n;

	for (int i = 1; i <= n; i++){
		cin >> m;
		number[i] = m;
	}

	int count = 0;
	for (int i = 2; i < n; i++){
		if ((number[i] < number[i - 1] && number[i] < number[i + 1]) || (number[i] > number[i - 1] && number[i] > number[i + 1]))
			count++;
	}

	cout << count << endl;
	return 0;
}
*/