#include <iostream>
using namespace std;

int main (){
	
	int a, b; //pode-se declarar mais de uma vari�vel por linha 
	int resultado;
	
	//lendo a e b
	cin >>a >> b;
	
	//calculando o resto da divis�o
	resultado = a % b;

	
	//mostrando o resultado
	cout << "resto da divisao = " << resultado << endl;
	
	return 0;
}