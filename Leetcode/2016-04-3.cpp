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

//·������
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

		//���·��
		if (line[0] != '/')
			line = cp + "/" + line + "/";
		
		//ȥ�����//
		while ((pos = line.find("//")) != -1){
			int count = 2;
			while (line[pos + count] == '/')
				count++;
			line.erase(pos, count - 1); //��pos��λ�ó�����ɾ��count-1��Ԫ��
		}

		//ȥ��/./
		while ((pos = line.find("/./")) != -1)
			line.erase(pos, 2);

		//ȥ������/
		if (line[line.size() - 1] == '/' && line.size() > 1)
			line.erase(line.size() - 1);

		//ȥ���м��/../
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