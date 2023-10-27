#include <iostream>
using namespace std;

int main (){
	
	int nota; //nota final
	
	//lendo nota
	cin >> nota;
	
	
	//verificando se o aluno foi aprovado ou nao
	
	if (nota >= 50){
		
		cout<<"Aprovado!"<< endl;
		cout<<"Parabens!"<< endl;

	}
	
	else {
		cout<<"Reprovado!"<< endl;
		cout<<"Estude mais!"<< endl;
	}
 return 0;
}                                                                                            