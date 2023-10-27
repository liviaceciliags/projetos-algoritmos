#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x){
	
	list<int>::iterator p;
	
	for(p = lista.begin(); p != lista.end(); p++)
		if(*p == x)
			return true;
		
	return false;
		
}

int main(){

    list<int> lista1; //declarando lista1
    list<int> lista2; //declarando lista2
    list<int> uniao; //lista para uniao das 2 anteriores
    list<int>::iterator p,q; //ponteiros para interagir com as listas
    int x; //variavel de entrada para as listas
    int tamanho; //variavel para tamanho da lista uniao
	int i,j; //contadores
	int trab; //variavel auxiliar para troca de posições
	bool troca = true; //variavel para condição de parada do while
	int limite; //variavel para limite da posição das comparações

    cin >> x; //le valor de x
    //preenche lista1 com valores
    while(x != 0){

        lista1.push_back(x);
        cin >> x;

    }

    cin >> x; //le valor de x
    //preenche lista2 com valores
    while(x != 0){

        lista2.push_back(x);
        cin >> x;

    }

    //une as duas listas sem repetir valores
    for(p = lista1.begin(); p != lista1.end(); p++)
        lista2.push_back(*p);

    for(p = lista2.begin(); p != lista2.end(); p++)
        if(!encontrar(uniao,*p))
            uniao.push_back(*p);

    //inicio da funcao bubble sort para listas
    tamanho = uniao.size(); //salva tamanho da lista
	limite = tamanho-1; //define limite de comparações
	
	while(troca){
		
		troca = false;
        p = uniao.begin();
        q = uniao.begin();
        q++;
		for(i=0;i<limite;i++){

			if(*p > *q){
				
				trab = *p;
				*p = *q;
				*q = trab;
				j = i;
				troca = true;
				
			}

            p++;
            q++;

        }

		limite = j;	
			
	}

    //fim da funcao bubble sort para listas

    //mostra na tela a lista ja organizada
    for(p = uniao.begin(); p != uniao.end(); p++)
        cout << *p << " ";

    cout << endl;

    while(!lista1.empty())
		lista1.pop_front();
    while(!lista1.empty())
		lista1.pop_front();
    while(!uniao.empty())
		uniao.pop_front();    

    return 0;
}