/*
	input��
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
	output��
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

//ģ������ϵͳ
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
vector<string> date; //��Ҫʹ�õ������������

int main(){
	int n, m;
	string temp_one, temp_two;
	cin >> n >> m;
	getchar(); // ������Ҫ����һ���ո񣬲�Ȼ��i��date�����ѹ��һ���س�
	
	for (int i = 0; i < n; i++){
		getline(cin, temp_one); //����һ������
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

			//��replace()�������
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