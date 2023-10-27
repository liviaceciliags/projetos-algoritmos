#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

	char nome;
	double idade, Ind;
	
	
	cin>> idade>> nome;
	
	Ind = idade *1/42-(idade-3);
	
	cout << fixed << setprecision (4);
	cout <<"Ind = " << Ind << endl;
	
	return 0;
	
}