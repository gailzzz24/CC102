#include <iostream>

using namespace std;

int main () 
{
    float sugarPriceUSD = 2, ricePricePound = 3, sardinesPricePound = 4, coffeePriceUSD = 3, milkPriceUSD = 5;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float PHP , pound , USD, USDtoPhp = 57.42, PoundToPhp = 75.21;
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
	
	cout << "Coffee $3\t\t:";
	cout << "Coffee quantity:";
	cin >> coffeeQty;
	
	cout << "Milk $5\t\t\t:";
	cout << "Milk quantity:";
	cin >> milkQty;
	
	double sugarCostPhp = sugarPriceUSD * sugarQty * USDtoPhp;
	double coffeeCostPhp = coffeePriceUSD * coffeeQty * USDtoPhp;
	double milkCostPhp = milkPriceUSD * milkQty * USDtoPhp;
	double riceCostPhp = ricePricePound * riceQty * PoundToPhp;
	double sardinesCostPhp = sardinesPricePound * sardinesQty * PoundToPhp;
	
	double totalCostPhp = sugarCostPhp + coffeeCostPhp + milkCostPhp + riceCostPhp + sardinesCostPhp ;
	
	cout << "____________________________________________" << endl;
	cout << "Amount to be paid in PHP:";
	cout << "PHP" << totalCostPhp << endl;
	
	return 0;
	

}