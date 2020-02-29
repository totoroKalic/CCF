/*
	input:
	7
	/d2/d3
	/d2/d4/f1
	../d4/f1
	/d1/./f1
	/d1///f1
	/d1/
	///
	/d1/../../d2
	output:
	/d2/d4/f1
	/d2/d4/f1
	/d1/f1
	/d1/f1
	/d1
	/
	/d2
*/

//路径解析
//http://118.190.20.162/view.page?gpid=T40

/*
#include <iostream>
#include <string>

using namespace std;

const int MAX = 1000;
char order[MAX];

int main(){
	string cp, line;
	int n, pos;
	cin >> n >> cp;
	getchar();

	for (int i = 1; i <= n; i++){
		getline(cin, line);

		//相对路径
		if (line[0] != '/')
			line = cp + "/" + line + "/";
		
		//去除多个//
		while ((pos = line.find("//")) != -1){
			int count = 2;
			while (line[pos + count] == '/')
				count++;
			line.erase(pos, count - 1); //从pos的位置出发，删除count-1个元素
		}

		//去除/./
		while ((pos = line.find("/./")) != -1)
			line.erase(pos, 2);

		//去除最后的/
		if (line[line.size() - 1] == '/' && line.size() > 1)
			line.erase(line.size() - 1);

		//去除中间的/../
		while ((pos = line.find("/../")) != -1){
			if (pos == 0)
				line.erase(pos, 3);
			else{
				int spos = line.rfind('/',pos - 1);
				line.erase(spos, pos - spos + 3);
			}
			if (line.size() == 0)
				line = "/";
		}

		cout << line << endl;
	}

	return 0;
}
*/