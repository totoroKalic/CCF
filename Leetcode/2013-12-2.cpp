/*
	input:
	0-670-82162-4
	0-670-82162-0
	output:
	Right
	0-670-82162-4
*/

//ISBNºÅÂë
//http://118.190.20.162/view.page?gpid=T4

/*
#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;

	cin >> input;
	int length = input.length() - 1;
	int sum = 0, j = 1;
	for (int i = 0; i<length; i++){
		if (input[i] != '-'){
			sum += (input[i] - '0')*j++;
		}
	}
	
	char flag;
	int Result_over = sum % 11;

	if (Result_over == 10)
		flag = 'X';
	else
		flag = Result_over + '0';

	if (flag == input[12])
		cout << "Right" << endl;
	else{
		input[12] = flag;
		cout << input << endl;
	}

	return 0;
}
*/