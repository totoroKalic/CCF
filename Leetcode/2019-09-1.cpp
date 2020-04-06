/*
---one--
input:
3 3
73 -8 -6 -4
76 -5 -10 -8
80 -6 -15 0
output:
167 2 23
---two---
input:
2 2
10 -3 -1
15 -4 0
output:
17 1 4
*/

//小明种苹果
//http://118.190.20.162/view.page?gpid=T94

/*
#include <iostream>
#include <stdlib.h>
#include <map>

using namespace std;

int main(){
map<int, int> tree;
int n, m, Apple;
int Allapple = 0;
cin >> n >> m;

for (int i = 1; i <= n; i++){
int num = 0, demo;
cin >> Apple;
for (int j = 0; j<m; j++){
cin >> demo;
num += abs(demo);
}
tree.insert(pair<int, int>(num, i));
Allapple = Allapple + (Apple - num);
}

map<int, int> ::iterator iter = tree.end();
iter--;
cout << Allapple << " " << iter->second << " " << iter->first << endl;

return 0;
}
*/