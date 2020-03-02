/*
	input:
	6
	2 5 5 7 3 5
	output:
	4
*/

//×î´ó²¨¶¯
//http://118.190.20.162/view.page?gpid=T47

/*
#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 1000;
int number[MAX+1];

int main(){
	int n, v,now,next,ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> v;
		number[i] = v;
	}


	for (int i = 0; i < n - 1; i++){
		int temp;
		now = number[i];
		next = number[i + 1];
		if (now - next > 0)
			temp = now - next;
		else
			temp = next - now;
		if (ans < temp)
			ans = temp;
	}
	cout << ans << endl;

	return 0;
}
*/