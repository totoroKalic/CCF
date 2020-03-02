/*
	input:
	8
	summon 1 3 6
	summon 2 4 2
	end
	summon 1 4 5
	summon 1 2 1
	attack 1 2
	end
	attack 1 1
	output:
	0
	30
	1 2
	30
	1 2
*/

//炉石传说
//http://118.190.20.162/view.page?gpid=T45

/*
#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

const int FIRST = 0;
const int SECOND = 1;

struct _node{
	int attack, health;
	_node(int a, int b){ attack = a; health = b; }
};

vector<_node> v[2];

int main(){
	int n;
	string option;
	int location, attack, health, attacker, defender;
	v[0].push_back(_node(0, 30));
	v[1].push_back(_node(0, 30));

	cin >> n;
	int flag = 0;
	for (int i = 0; i < n; i++){
		cin >> option;
		if (option == "end"){
			flag = 1 - flag;
			continue;
		}else if (option == "summon"){
			cin >> location >> attack >> health;
			v[flag].insert(v[flag].begin()+location, _node(attack, health)); //在location+1的位置前插入一个元素，这与题中的描述相符
		}else{
			cin >> attacker >> defender;
			v[flag][attacker].health -= v[1 - flag][defender].attack;
			v[1 - flag][defender].health -= v[flag][attacker].attack;
			
			if (v[flag][attacker].health <= 0)
				v[flag].erase(v[flag].begin() + attacker);
			if (defender != 0 && v[1 - flag][defender].health <= 0)
				v[1 - flag].erase(v[1 - flag].begin() + defender);
		}
	}

	//第一行
	if (v[FIRST][0].health <= 0)
		cout << -1 << endl;
	if (v[SECOND][0].health <= 0)
		cout << 1 << endl;
	if (v[FIRST][0].health > 0 && v[SECOND][0].health > 0)
		cout << 0 << endl;
	//第二行
	cout << v[FIRST][0].health << endl;
	//第三行
	cout << v[FIRST].size() - 1 << " ";
	for (int i = 1; i < (int)v[FIRST].size(); i++)
		cout << v[FIRST][i].health << " ";
	cout << endl;
	//第四行
	cout << v[SECOND][0].health << endl;
	//第五行
	cout << v[SECOND].size() - 1 << " ";
	for (int i = 1; i < (int)v[SECOND].size(); i++)
		cout << v[SECOND][i].health << " ";
	cout << endl;

	return 0;
}
*/