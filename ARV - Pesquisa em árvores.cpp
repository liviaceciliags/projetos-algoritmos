#include<iostream>

using namespace std;

struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};
typedef treenode* treenodeptr;

void tInsere(treenodeptr &arvore, int x)
{
	if(arvore == NULL)
	{
		arvore = new treenode;
		arvore->info = x;
		arvore->esq = NULL;
		arvore->dir = NULL;
	}
	else if(x < arvore->info)
		tInsere(arvore->esq, x);
	else
		tInsere(arvore->dir, x);
}

//retorna um ponteiro para o nó cujo o campo info é igual a x
//retorna NULL se x n estriver na arvore
treenodeptr tPesq(treenodeptr p, int x)
{
	if (p == NULL) // elemento n~ao encontrado
		return NULL;
	else if (x == p->info) // elemento encontrado na raiz
		return p;
	else if (x < p->info) // procura na sub´arvore esquerda
		return tPesq(p->esq, x);
	else // procura na sub´arvore direita
		return tPesq(p->dir, x);
}



void tDestruir (treenodeptr &arvore)
{
	if (arvore != NULL)
	{
		tDestruir(arvore->esq);
		tDestruir(arvore->dir);
		delete arvore;
	}
	arvore = NULL;
}

int main()
{
	treenodeptr arvore = NULL;
	treenodeptr p;
	int x;
	int N;
	
	cin >> N;
	


	for (int i = 0;  i < N; N++)
	{
		cin >> x;
		tInsere(arvore, x);
	}
	
	cin >> x;

	p = tPesq(arvore, x);
	if(p == NULL)
		cout << "\nnot found\n";
	else
		cout << "\n" << p->info << " foi encontrado\n";
	
	tDestruir(arvore);
	return 0;
}
