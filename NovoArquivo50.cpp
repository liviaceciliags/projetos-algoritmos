/*Fa�a um programa com uma struct que armazene o nome composto de um aluno, 
suas notas inteiras N1 e N2, e em uma fun��o inteira com par�metro por c�pia e com retorno, 
calcule a m�dia desse aluno e mostre o nome do aluno e sua m�dia com duas casas decimais. 
Copie e cole o c�digo na resposta.*/

#include <iostream>
#include <iomanip>

using namespace std;



int nota (int N1, int N2){
		
	return ((float)(N1+N2)/2);
}

struct dados
{
	char nome[100]; 
	int N1;
	int N2;
};

int main()
{
	dados aluno; 
	
	cin.getline(aluno.nome, 100); 
	cin >> aluno.N1 >> aluno.N2;
	
	cout << "Aluno(a): " << aluno.nome << endl << fixed << setprecision(2) << "Media: " << nota(aluno.N1, aluno.N2) << endl; 
	return 0;
}