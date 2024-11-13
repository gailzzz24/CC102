#include <iostream>

using namespace std;

int main ()
{
    double age;
	
    cout << "What is your age???";
	cin >> age;
	if (age < 18){
	   cout << "Uhm, sorry but you're too young to drive." << endl;
	}
	else if (age>=18, age<=30){
       cout << "Drive safe bossing!!" << endl;
	}
    else if (age > 30){
	   cout << "You're getting pretty old, ingat po sa byahe!!" << endl;
	}
    return 0;
}