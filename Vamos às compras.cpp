#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	char name[50];
	int N;
	double valor;

	cin.getline(name,50);
	cin>>N;
	
	if (0 < N < 1000000){
		valor = (34.90/12)*N;
	
		cout << fixed <<setprecision(2);
		cout << name << endl << endl;
		cout << "R$: " <<valor<<endl;
	}	
	return 0;	
}