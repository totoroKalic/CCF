/*
	input:
	buy 9.25 100
	buy 8.88 175
	sell 9.00 1000
	buy 9.00 400
	sell 8.92 400
	cancel 1
	buy 100.00 50

	output:
	9.00 450
*/

//集合竞价
//http://118.190.20.162/view.page?gpid=T19

//demo
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct data {
	string a;
	float b;
	long long c;
	int d;
};

struct money {
	float a;
	long long b, s;
};

vector<data> notes;
vector<money> mon;
data temp;
money mtemp;

bool com(data a, data b) {
	if (a.d == b.d&&a.d == 1) {
		return a.b<b.b;
	}
	return a.d>b.d;
}

void find(float a, string b, long long c) {
	int i;
	for (i = 0; i<mon.size(); i++) {
		if (mon[i].a == a) {
			if (b == "buy") {
				mon[i].b += c;
			}
			else {
				mon[i].s += c;
			}
			break;
		}
	}
	if (i == mon.size()) {
		mtemp.a = a;
		if (b == "buy") {
			mtemp.b = c;
			mtemp.s = 0;
		}
		else {
			mtemp.s = c;
			mtemp.b = 0;
		}
		mon.push_back(mtemp);
	}
}

int main() {
	while (cin >> temp.a) {
		if (temp.a == "buy" || temp.a == "sell") {
			cin >> temp.b >> temp.c;
			temp.d = 1;
		}
		else if (temp.a == "cancel") {
			cin >> temp.b;
			notes[temp.b - 1].d = 0;
			temp.d = 0;
		}
		else {
			break;
		}

		notes.push_back(temp);
	}
	cout << "The notes of Before sort: " << endl;
	cout << "a：储存记录标识 b：出价 c：股数 d：是否失效" << endl;
	for (int i = 0; i < notes.size(); i++){
		cout << "    "<< notes[i].a << "    " << notes[i].b << "    " << notes[i].c << "    " << notes[i].d << endl;
	}

	sort(notes.begin(), notes.end(), com);

	cout << "The notes of After sort: " << endl;
	cout << "a：储存记录标识 b：出价 c：股数 d：是否失效" << endl;
	for (int i = 0; i < notes.size(); i++){
		cout <<"    "<< notes[i].a << "    " << notes[i].b << "     "  << notes[i].c << "     " << notes[i].d<< endl;
	}
	cout << endl;

	for (int i = notes.size() - 1; i>-1; i--) {
		if (notes[i].d == 1) {
			find(notes[i].b, notes[i].a, notes[i].c);
		}
		else {
		}
	}

	cout << endl;
	cout << "The money of: " << endl;
	cout << "a：出价 b：买入股数 s：卖出股数" << endl;
	for (int i = 0; i < mon.size(); i++){
		cout <<"   "<< mon[i].a << "   " << mon[i].b << "   " << mon[i].s << endl;
	}
	cout << endl;

	long long max = -1;
	float order;

	for (int i = 0; i<mon.size(); i++) {
		long long sumb = 0, sums = 0;
		for (int j = 0; j <= i; j++) {
			sumb += mon[j].b;
		}
		for (int j = i; j<mon.size(); j++) {
			sums += mon[j].s;
		}
		long long m = sumb<sums ? sumb : sums;
		if (max<m) {
			max = m;
			order = mon[i].a;
		}
	}
	printf("%.2f %lld\n", order, max);
	return 0;
}
*/

/*
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct _dates
{
	string sign;
	float price;
	long long number;
	int flag_cancel;
};

struct _all{
	float price;
	long long In_number;
	long long Out_number;
};

struct _answer
{
	float price;
	long long number;
};

vector<_dates> dates;
vector<_all> all;
_dates temp_data;
_all temp_all;
_answer ans;


bool cmp(_dates a, _dates b){
	if (a.flag_cancel == 1 && a.flag_cancel == b.flag_cancel)
		return a.price < b.price;
	else
		return a.flag_cancel > b.flag_cancel;
}

void find(string a, float b, long long c){
	int i = 0;
	for (i; i < all.size(); i++){
		if (all[i].price == b){
			if (a == "sell")
				all[i].Out_number += c;
			if (a == "buy")
				all[i].In_number += c;
			break;
		}
	}
	if (i == all.size()){
		if (a == "sell"){
			temp_all.price = b;
			temp_all.In_number = 0;
			temp_all.Out_number = c;
		}
		if (a == "buy"){
			temp_all.price = b;
			temp_all.In_number = c;
			temp_all.Out_number = 0;
		}

		all.push_back(temp_all);
	}
}


int main(){
	ans.number = 0;
	while (cin >> temp_data.sign){
		if (temp_data.sign == "sell" || temp_data.sign == "buy"){
			cin >> temp_data.price >> temp_data.number;
			temp_data.flag_cancel = 1;
		}
		else if (temp_data.sign == "cancel"){
			cin >> temp_data.price;
			dates[temp_data.price - 1].flag_cancel = 0;
			temp_data.flag_cancel = 0;
		}
		else
			break;

		dates.push_back(temp_data);
	}

	sort(dates.begin(), dates.end(), cmp);
	
	for (int i = 0; i < dates.size(); i++){
		if (dates[i].flag_cancel == 1){
			find(dates[i].sign, dates[i].price, dates[i].number);
		}
		else
			continue;
	}

	//run and ignore
	cout << endl;
	cout << "The money of: " << endl;
	cout << "a：出价 b：买入股数 s：卖出股数" << endl;
	for (int i = 0; i < all.size(); i++){
		cout << "   " << all[i].price << "   " << all[i].In_number << "   " << all[i].Out_number << endl;
	}
	

	
	//出价至少为x的买单和出价至多为x的卖单

	for (int i = 0; i < all.size(); i++){
		long long com_one = 0;
		long long com_two = 0;
		long long answer;

		for (int j = i; j < all.size(); j++)//buy
			com_one += all[j].In_number;
		for (int k = i; k >= 0; k--) //sell
			com_two += all[k].Out_number;
		
		answer = com_one > com_two ? com_two : com_one;

		if (answer >= ans.number){
			ans.price = all[i].price;
			ans.number = answer;
		}
	}

	printf("%.2f %lld\n", ans.price, ans.number);

	return 0;
}
*/