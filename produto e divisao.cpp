#include <iostream>
#include <iomanip> // biblioteca das casa decimais 
using namespace std;

int main ()
{
	double x; //pode-se atribuir o valor nessa etapa, mas n�o � recomend�vel
	double y;
	double produto; //x*y
	double divisao; //x/y
	
	// atribuindo valores para x e y 
	//x = 2;
	//y = 3;
	
	
	//Lendo os valores atribu�dos � x e y	
	cout << "Digite um valor" << endl;
	cin >> x;
	
	cout << "Digite outro valor valor" << endl;
	cin >> y;
	
	
	//calculando o produto
	produto = x*y;
	
	//calculando a divis�o
	divisao = x/y;
	
	//mostrando o produto
	cout << fixed << setprecision(0); //s� mostra duas casas decimais 
	cout << "produto = " << produto << endl;
	
	//mostrando a divis�o
	cout << "divisao = " << divisao << endl;
	
	return 0;
}