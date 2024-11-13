#include <iostream>

using namespace std;

int main ()
{
    double temperature;
	cout << "Enter the current temperature:";
	cin >> temperature;
	
	if (temperature <32){
	   cout << "It's cold outside, please bring a heavy jacket." << endl;
	}
	else if (temperature >=32, temperature<=50){
	   cout << "It's a bit chilly, you should atleast bring a light jacket." << endl;
	}
	else {
	   cout << "The weather is warm, no need for a jacket." << endl;
	}
    return 0;
}
