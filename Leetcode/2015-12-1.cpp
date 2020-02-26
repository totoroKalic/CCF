/*
	input:
	201512320
	output:
	13
*/

//数位之和
//http://118.190.20.162/view.page?gpid=T37

/*
#include <iostream>
#include <string>

using namespace std;

int main(){
	string number;
	int word,count = 0;
	cin >> number;

	int len = number.length();
	for (int i = 0; i < len; i++){
		word = number[i] - '0';
		count += word;
	}

	cout << count << endl;

	return 0;
}
*/