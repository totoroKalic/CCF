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

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

