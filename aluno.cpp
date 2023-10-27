#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main ()
{
    char name [100], aluno [100], aluno1 [100];
    int palavra;
    int sair = 1;
    int matricula, i = 0;
    double NP1, NP2, media, maior = 0, menor = 101, mgeral, soma = 0 ;

    do
    {
        i++;
        cin.ignore();
        cin.getline (name,100);
        cin>> matricula;
        cin>> NP1 >> NP2;
        media = (NP1 + NP2)/2;
        cout << media <<endl;
        if (media >= maior)
        {
            maior = media;
            strcpy(aluno, name);
        } 
        else 
        {
		    menor = media;
        	strcpy(aluno1, name);
		}
    
        soma = soma + media;
        cout << "Aluno: "<< name << endl;
        cout << "Mat: "<< matricula << endl;
        cout << "Media: "<< media << endl;
        cin >> palavra;
        cin.ignore();
    }while (palavra != sair);

    mgeral = soma / i;
    cout << fixed << setprecision (2) << endl;
    cout << "Media Geral: " << mgeral << endl;
    cout << "Maior media: " << maior << " - " << aluno << endl;
    cout << "Menor media: " << menor << " - " << aluno1 << endl;
    cout << "Programa Finalizado"<< endl;

    return 0;
}