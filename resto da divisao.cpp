#include <iostream>
using namespace std;

int main (){
	
	int a, b; //pode-se declarar mais de uma variável por linha 
	int resultado;
	
	//lendo a e b
	cin >>a >> b;
	
	//calculando o resto da divisão
	resultado = a % b;

	
	//mostrando o resultado
	cout << "resto da divisao = " << resultado << endl;
	
	return 0;
}