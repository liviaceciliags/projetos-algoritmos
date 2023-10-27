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

treenodeptr tMenor(treenodeptr &raiz)
{
	treenodeptr t;
	t = raiz;
	if (t->esq == NULL) // encontrou o menor valor
	{
		raiz = raiz->dir;
		return t;
	}
	else // continua a busca na sub´arvore esquerda
		return tMenor(raiz->esq);
}

int tRemove(treenodeptr &arv, int x)
{
	treenodeptr p;
	if (arv == NULL) // ´arvore vazia
		return 1;
	if (x == arv->info)
	{
		p = arv;
		if (arv->esq == NULL) // a raiz n~ao tem filho esquerdo
			arv = arv->dir;
		else if (arv->dir == NULL) // a raiz n~ao tem filho direito
			arv = arv->esq;
		else // a raiz tem ambos os filhos
		{
			p = tMenor(arv->dir);
			arv->info = p->info;
		}
		delete p;
		return 0;
	}
	else if (x < arv->info)
		return tRemove(arv->esq, x);
	else
		return tRemove(arv->dir, x);
}

void emOrdem(treenodeptr &arvore){
	if(arvore != NULL){
		emOrdem(arvore->esq);
		cout << arvore->info << " ";
		emOrdem(arvore->dir);
	}
}

int main()
{
	treenodeptr arvore = NULL;
	int x;
	
	cin >> x;
	
	while(x != 0){
		tInsere(arvore,x);
		cin >> x;
	}
	
	cin >> x;
	
	while(tRemove(arvore,x) == 0)
		tRemove(arvore,x);
	
	emOrdem(arvore);
	
	return 0;
}