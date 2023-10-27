#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
	int matricula;
	float nota1;
	float nota2;
	float media;

};

int main ()
{

	dados aluno;

	cout << "Digite o seu numero de matricula: " << endl;
	cin >> aluno.matricula;
	cout << "Digite a nota da primeira prova: " << endl;
	cin >> aluno.nota1;
	cout << "Digite a nota da segunda prova: " << endl;
	cin >> aluno.nota2;

	aluno.media = (aluno.nota1 * 2 + aluno.nota2 * 3) / 5;
	cout << "Matricula do aluno: " << aluno.matricula << endl;
	cout << fixed << setprecision(2);
	cout << "Nota da primeira prova: " << aluno.nota1 << endl;
	cout << "Nota da segunda prova: " << aluno.nota2 << endl;
	cout << "Media: " << aluno.media << endl;
	return 0;
}
