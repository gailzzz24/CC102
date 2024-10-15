#include <iostream>

using namespace std;

int main () 
{
    float sugarPriceUSD = 2, ricePricePound = 3, sardinesPricePound = 4, coffeePriceUSD = 3, milkPriceUSD = 5;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float PHP = 57.42, pound, USD, USDtoPHP, POUNDtoPHP;
	string totalCostPHP;
	totalCostPHP = sugarPriceUSD + ricePricePound + sardinesPricePound + coffeePriceUSD + milkPriceUSD;
	
	cout << "Sugar $2\t\t:";
	cout << "Sugar quantity:";
	cin >> sugarQty;
	
	cout << "Rice = 3 pound\t\t:";
	cout << "Rice quantity:";
	cin >> riceQty;
	
	cout << "Sardines = 4 pound\t:";
	cout << "Sardines quantity:";
	cin >> sardinesQty;
	
	cout << "Coffee $3\t:";
	cout << "Coffee quantity:";
	cin >> coffeeQty;
	
	cout << "Milk $5\t:";
	cout << "Milk quantity:";
	cin >> milkQty;
	
	return 0;
	

}