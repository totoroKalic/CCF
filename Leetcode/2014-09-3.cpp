/*
	use Cirl+F5 to run it
	input:
	Hello
	1
	5
	HelloWorld
	HiHiHelloHiHi
	GreplsAGreatTool
	HELLO
	HELLOisNOTHello
*/

//字符串匹配
//http://118.190.20.162/view.page?gpid=T14

//方法一：使用相关的的库函数
//方法二：使用KMP算法
//其实都一样....使用strstr(char *str_1,char *str_2)

//方法一：
/*
#include <iostream>
#include <cstring>

using namespace std;

const int N = 100;

void mystrlwr(char *exam){
	while (*exam){
		if ('A' <= *exam && *exam <= 'Z')
			*exam += 'a' - 'A';
		exam++;
	}
}


int main(){
	char Exam[N + 1], Text[N + 1], Lowerexam[N + 1], LowerText[N + 1];
	int option, n;
	cin >> Exam >> option >> n;
	
	strcpy(Lowerexam, Exam);
	mystrlwr(Lowerexam);

	for (int i = 0; i < n; i++){
		cin >> Text;
		if (option == 0){
			strcpy(LowerText, Text);
			mystrlwr(LowerText);	//!!
			if (strstr(LowerText, Lowerexam))	//!!!!!!!!!!!!!!!!!!!!
				cout << Text << endl;
		}
		else{
			if (strstr(Text, Exam)){
				cout << Text << endl;
			}
		}
	}

	return 0;
}
*/