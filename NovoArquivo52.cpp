#include <iostream>
#include <iomanip>
#include <fstream> //declarando a biblioteca de arq
using namespace std;

int main()
{
    ifstream arqin; // declarando variavel de leitura 
    char nomearq[50];//armazena o nome do arquivo
    int nota[100];//armazena as notas
    int i;//contador
    double soma = 0; //armazena a soma das notas
    double media; //armazena a media das notas
    int aux = 0; //auxiliar para saber a quantidade de notas registradas 
    
    //lendo o nome do arquivo
    cin.getline(nomearq, 50);

    //abrindo o arquivo
    arqin.open(nomearq, ofstream::in);
    
    //lendo as notas
    for (i = 0; i < 100; i++ ){
        arqin >> nota[i];
        if (nota[i] == -1)
            break; //parando de ler quando chegar no -1
        soma += nota[i];//somando as notas
        aux++;//somando mais 1 à quantidade de notas atribuidas
    }
    
    //calculado a media
    media = soma / aux;
    
    //imprimindo a media 
    cout << fixed << setprecision(2) << media << endl;
    
    //fechando o arquivo
    arqin.close();
    return 0;
}
