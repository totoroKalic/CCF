/*
	input:
	20
	output:
	2
	1
	1
	0

	input:
	66
	output:
	7
	5
	11
	5
*/

//±¨Êı
//http://118.190.20.162/view.page?gpid=T100

/*
#include <iostream>

using namespace std;

struct Student{
	int A;
	int B;
	int C;
	int D;
};

bool isContinue(int A){
	if (A % 7 == 0)
		return true;
	while (A > 0){
		if (A % 10 == 7)
			return true;
		A = A / 10;
	}
	return false;
}

int main(){
	Student stu;
	stu.A = 0;
	stu.B = 0;
	stu.C = 0;
	stu.D = 0;

	int num,flag = 1,demo = 1,number = 0;
	cin >> num;
	while (number < num){
		if (isContinue(flag) == true){
			if (demo % 4 == 1)
				stu.A++;
			else if (demo % 4 == 2)
				stu.B++;
			else if (demo % 4 == 3)
				stu.C++;
			else if (demo % 4 == 0)
				stu.D++;
		}
		else{
			number++;
		}
		demo++;
		flag++;
	}
	cout << stu.A << endl;
	cout << stu.B << endl;
	cout << stu.C << endl;
	cout << stu.D << endl;

	return 0;
}
*/