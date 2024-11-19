#include <iostream>
using namespace std;
int main (){
    int age; double money; 
	string toPrintshow, toPrintmoney;
	bool parent;
	cout << "Enter age:";
	cin >> age;
	cout << "with parent?(y=yes, n=no):";
	cin >> parent;
	if (age<13){
		cout << "with parent?(y=yes, n=no):";
	    cin >> parent;
		if (parent == 'y'){
		toPrintshow = "PG and G show";
	}else (parent == 'n');
		toPrintshow = "G show"; 
	}
	else if (age>=13, age<=16){
		cout << "with parent?(y=yes, n=no):";
	    cin >> parent;
		if (parent == 'y'){
		toPrintshow = "R, PG, and G show";
		}else (parent == 'n'){
		toPrintshow = "PG and G show";
    cout << "Enter money: ";
	cin >> money;
	if(money<7.5){
		toPrintmoney = "Not enough money.";
	}else(money<10.5){
		toPrintmoney = "Can go to matinee show.";
	}else if{
		toPrintmoney = "Can go to evening & matinee show.";
	cout << toPrintshow << endl;
		cout << toPrintmoney << endl;}
	}
	return 0;
}  