/*
	input:
	5 2 7 2014 2015
	output:
	2014/05/11
	2015/05/10
*/

//节日
//http://118.190.20.162/view.page?gpid=T25

/*
#include <iostream>

using namespace std;

const int MAX_A = 12;
const int MAX_B = 5;
const int MAX_C = 7;
const int MAX_Y = 2050;
const int MIN_Y = 1850;

int isRunyear(int i){
	if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
		return 1;
	else
		return 0;
}

int day(int n){
	int alldays = 0;
	for (int i = MIN_Y; i < n; i++){
		if (isRunyear(i) == 1)
			alldays += 366;
		else
			alldays += 365;
	}
	return alldays;
}

int main(){
	//a月的第b个星期的星期c
	int a, b, c, y_1, y_2;
	int weeked,The_day;
	cin >> a >> b >> c >> y_1 >> y_2;

	int days[2][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, //平年 
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	};
	
	for (int i = y_1; i <= y_2; i++){
		int demo = day(i);
		int y = isRunyear(i);
		for (int j = 1; j < a; j++){
			demo += days[y][j];
		}
		//前一天是星期几
		weeked = (1 + demo % 7) % 7;
		//然后计算几月星期几是几号
		The_day = (weeked >= c) ? (b * 7 + c - weeked) : ((b - 1) * 7 + c - weeked); //计算当前星期是这个月的几号
		if (The_day > days[y][a])
			cout << "none" << endl;
		else{
			cout << i << "/";
			if (a < 10)
				cout << "0";
			cout << a << "/";
			if (The_day < 10)
				cout << "0";
			cout << The_day << endl;
		}
	}

	return 0;
}
*/