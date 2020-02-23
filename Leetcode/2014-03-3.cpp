/*
	use cirl+F5 to run it

	input:
	albw:x
	4
	ls -a -l -a documents -b
	ls
	ls -w 10 -x -w 15
	ls -a -b -c -d -e -l
	output:
	Case 1: -a -l
	Case 2:
	Case 3: -w 15 -x
	Case 4: -a -b
*/

//http://118.190.20.162/view.page?gpid=T8

/*
	动态数组使用vector去构造...
*/

/*
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>

using namespace std;

const int N = 256;
char delimiter[] = " ";


//获取需要分析的命令行
void mygetline(char *pc){
	char c;
	while ((c = getchar()) != '\n' && c != EOF)
		*pc++ = c;
	*pc = '\0';
}

//strtok(a,b) 将a用b分割开来
void spit(vector<string>& v, char *s, char *t){
	char *sp;
	sp = strtok(s, t);
	while (sp){
		v.push_back(sp);
		sp = strtok(NULL, t);
	}
}

int main(){
	string format; //第一行的初始命令
	char s[N + 1]; //命令行
	int n;
	cin >> format >> n;
	getchar();

	for (int i = 1; i <= n; i++){
		vector<string> sv;  //处理后的命令行
		map<string, string> m; //结果的输出 自动实现升序！
		mygetline(s);	
		
		spit(sv, s, delimiter);
		//j = 0,sv[0] = "ls" 
		for (int j = 1; j < (int)sv.size(); j++){
			if (sv[j].size() == 2 && sv[j][0] == '-'){
				int position = format.find(sv[j][1]);
				if (position == -1) // pay attention to -1 !!!!
					break;
				if (m.find(sv[j]) == m.end()){
					m[sv[j]] = "";
				}
				if (format[position + 1] == ':' && j + 1 < (int)sv.size()){
					m[sv[j]] = sv[j+1];
					j++;
				}
			}
			else
				break;
		}
		cout << "Case " << i << ":";
		for (map<string, string>::iterator iter = m.begin(); iter != m.end(); iter++){
			cout << " " << iter->first;
			if (iter->second != "")
				cout << " " << iter->second;
		}
		cout << endl;
	}
	return 0;
}
*/