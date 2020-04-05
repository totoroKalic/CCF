/*
input:
11
4Au+8NaCN+2H2O+O2=4Na(Au(CN)2)+4NaOH
4Zn+10HNO3=4Zn(NO3)2+NH4NO3+3H2O
H2+O2=H2O
2H2+O2=2H2O
H2+Cl2=2NaCl
H2+Cl2=2HCl
CH4+2O2=CO2+2H2O
CaCl2+2AgNO3=Ca(NO3)2+2AgCl
3Ba(OH)2+2H3PO4=6H2O+Ba3(PO4)2
3Ba(OH)2+2H3PO4=Ba3(PO4)2+6H2O
Cu+As=Cs+Au

output:

*/

//http://118.190.20.162/view.page?gpid=T98
/*
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct Element{
string name;
int num;
Element(string _name, int _num) :name(_name), num(_num){}
};

vector<Element> singleAtom;
map<string, int> Mapleft;
map<string, int> Mapright;

bool isDigist(char demo){
if (demo <= '9' && demo >= '0')
return true;
else
return false;
}

bool isSmall(char demo){
if (demo <= 'z' && demo >= 'a')
return true;
else
return false;
}

bool isBig(char demo){
if (demo >= 'A' && demo <= 'Z')
return true;
else
return false;
}

void countAtom(string str, int direction){
singleAtom.clear();

int i = 0, len = str.size();
int factor = 1;
string Firstnum = "";
while (isDigist(str[i])){
Firstnum.push_back(str[i]);
i++;
}
if (!Firstnum.empty())
factor = atoi(Firstnum.c_str());

while (i < len){
if (isDigist(str[i])){
int number = 1;
int Slen = singleAtom.size();
Firstnum.clear();
while (isDigist(str[i])){
Firstnum.push_back(str[i]);
i++;
}
number = atoi(Firstnum.c_str());
if (singleAtom[Slen - 1].name == ")"){
int j = Slen - 1;
singleAtom[j].name = "*";
while (singleAtom[--j].name != "("){
singleAtom[j].num *= number;
}
singleAtom[j].name = "*";
}
else
singleAtom[Slen - 1].num *= number;
}
else if (str[i] == '(' || str[i] == ')'){
singleAtom.push_back(Element(string(1, str[i]), 0));
i++;
}
else if (isBig(str[i])){
string name = "";
name.push_back(str[i]);
i++;
if (isSmall(str[i])){
name.push_back(str[i]);
i++;
}
singleAtom.push_back(Element(name, 1));
}
}
if (singleAtom[singleAtom.size() - 1].name == ")"){
int j = singleAtom.size() - 1;
singleAtom[j].name = "*";
while (singleAtom[j].name != "("){
j--;
}
singleAtom[j].name = "*";
}

if (direction == 1){
for (int i = 0; i < singleAtom.size(); i++){
if (singleAtom[i].name == "*")
continue;
Mapleft[singleAtom[i].name] += singleAtom[i].num * factor;
}
}
else{
for (int i = 0; i < singleAtom.size(); i++){
if (singleAtom[i].name == "*")
continue;
Mapright[singleAtom[i].name] += singleAtom[i].num * factor;
}
}
}

void Division(string str) {
bool flag = false;
string demo;
int len = str.length();

for (int i = 0; i<len; i++){
if (str[i] != '+' && str[i] != '='){
demo.push_back(str[i]);
}
else if (str[i] == '='){
countAtom(demo, 1);
demo.clear();
flag = true;
}
else if (str[i] == '+'){
if (flag == false){
//cout << "test" << demo<<endl;
countAtom(demo, 1);
}
else{
countAtom(demo, 2);
}
demo.clear();
}
}
countAtom(demo, 2);
}

bool judge(){
if (Mapleft.size() != Mapright.size())
return  false;
else{
for (map<string, int>::iterator it = Mapleft.begin(); it != Mapleft.end(); it++){
if (Mapright[it->first] != it->second)
return false;
}
for (map<string, int>::iterator it = Mapright.begin(); it != Mapright.end(); it++){
if (Mapleft[it->first] != it->second)
return false;
}
}
return true;
}

int main(){
int n;
cin >> n;
for (int i = 0; i < n; i++){
Mapleft.clear();
Mapright.clear();
singleAtom.clear();
string str;

cin >> str;
Division(str);

if (judge() == true)
cout << "Y" << endl;
else
cout << "N" << endl;

}

return 0;
}
*/