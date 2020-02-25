/*
	input：
	11 2
	<!DOCTYPE html>
	<html>
	<head>
	<title>User {{ name }}</title>
	</head>
	<body>
	<h1>{{ name }}</h1>
	<p>Email: <a href="mailto:{{ email }}">{{ email }}</a></p>
	<p>Address: {{ address }}</p>
	</body>
	</html>
	name "David Beckham"
	email "david@beckham.com"
	output：
	<!DOCTYPE html>
	<html>
	<head>
	<title>User David Beckham</title>
	</head>
	<body>
	<h1>David Beckham</h1>
	<p>Email: <a href="mailto:david@beckham.com">david@beckham.com</a></p>
	<p>Address: </p>
	</body>
	</html>
*/

//模板生成系统
//http://118.190.20.162/view.page?gpid=T30

/*
#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <vector>

using namespace std;

const int MAX = 100;
map<string, string> dict;
vector<string> date; //需要使用迭代器遍历输出

int main(){
	int n, m;
	string temp_one, temp_two;
	cin >> n >> m;
	getchar(); // 这里需要增加一个空格，不然不i在date里面多压入一个回车
	
	for (int i = 0; i < n; i++){
		getline(cin, temp_one); //输入一行数据
		date.push_back(temp_one);
	}
	for (int i = 0; i < m; i++){
		cin >> temp_one;
		getline(cin, temp_two);
		//dict.insert(pair<string, string>(temp_one, temp_two.substr(2,temp_two.size()-3))); //!!!
		dict[temp_one] = temp_two.substr(2, temp_two.size() - 3);
	}
	
	for (int i = 0; i < n; i++){
		int prev = 0;
		int next = 0;
		string key;
		for (;;){
			if ((prev = date[i].find("{{", prev)) == (int)string::npos)
				break;
			if ((next = date[i].find("}}", prev)) == (int)string::npos)
				break;
			key = date[i].substr(prev + 3, next - prev - 4);
			
			//cout << dict["name"] << endl;

			//用replace()函数替代
			map<string, string>::iterator it;
			it = dict.find(key);
			
			if (it != dict.end()){
				date[i].replace(prev, next - prev + 2, dict[key]);
				prev += dict[key].length();
			}
			else{
				date[i].replace(prev, next - prev + 2, "");
				prev += key.length() + 6;
			}
		}
	}

	for (vector<string>::iterator it = date.begin(); it != date.end(); it++)
		cout << *it << endl;
	

	return 0;
}
*/