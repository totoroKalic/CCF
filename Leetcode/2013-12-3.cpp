/*
	use Cirl+F5 to run it
	input:
	6
	3 1 6 5 2 3
	output:
	10
*/

//×î´óµÄ¾ØÕó
//http://118.190.20.162/view.page?gpid=T3

/*
#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

const int N = 1000;
int number[N+1];

int main(){
	int n;
	long ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++){
		scanf("%d", &number[i]);
	}

	for (int i = 0; i < n; i++){
		int length = 1;
		for (int j = i - 1; j >= 0; j--){
			if (number[j] < number[i])
				break;
			else
				length++;
		}
		for (int j = i + 1; j < n; j++){
			if (number[j] < number[i])
				break;
			else
				length++;
		}

		ans = fmax(length * number[i], ans);		
	}
	cout << ans << endl;

	return 0;
}
*/