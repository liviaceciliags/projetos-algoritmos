#include<iostream>
#include<list>
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

void emNivel(treenodeptr t, int &aux)
{

	treenodeptr n;
	list<treenodeptr> q;

	if(t != NULL)
	{
		q.push_back(t);
		while(!q.empty())
		{
			n = *q.begin();
			q.pop_front();
			if(n->esq != NULL)
				q.push_back(n->esq);
			if(n->dir != NULL)
				q.push_back(n->dir);
			//cout << n->info << " ";

		}
		aux++;
	}
}

int main()
{
	treenodeptr arvore = NULL;
	int x;
	int aux = 0;
	cin >> x;
	while(x != -1)
	{
		tInsere(arvore, x);
		cin >> x;
	}

	emNivel(arvore, aux);
	cout << aux;

	return 0;
}
