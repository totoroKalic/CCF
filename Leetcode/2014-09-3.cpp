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

//�ַ���ƥ��
//http://118.190.20.162/view.page?gpid=T14

//����һ��ʹ����صĵĿ⺯��
//��������ʹ��KMP�㷨
//��ʵ��һ��....ʹ��strstr(char *str_1,char *str_2)

//����һ��
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