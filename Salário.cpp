#include <iostream>
#include <iomanip>


using namespace std;

int main (){
	
	double fixo, vendas, total, comissao;
	char nome[100];
	comissao = 0.15;
	
	cin.getline(nome,100); 
	
	cin >> fixo >> vendas;
	
	total= fixo+vendas*comissao;
	
	cout<<fixed<<setprecision(2);
	cout<<"TOTAL = R$ "<< total<< endl;
	
	return 0; 
}