/*
	use Cirl+F5 to run it
	
	input:
	6
	10 2 6 3 7 8
	output:
	3
*/

//ÏàÁÚÊı¶Ô
//http://118.190.20.162/view.page?gpid=T16

//the first way:use array count to make it
/*
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

const int N = 1000;
int number[N];

int main(){
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d", &number[i]);
	}
	int count = 0;

	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (abs(number[j] - number[i]) == 1)
				count += 1;
		}
	}

	cout << count<< endl;

	return 0;

}
*/

//The second way:use mark array to make it
/*
#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

const int N = 10000;
int flag[N];

int main(){
	int n,temp, count = 0;
	scanf("%d", &n);
	memset(flag, 0, sizeof(flag));
	while (n--){
		scanf("%d", &temp);
		flag[temp] = 1;
		if (flag[temp - 1])
			count++;
		if (flag[temp + 1])
			count++;
	}
	cout << count << endl;
	return 0;
}
*/

