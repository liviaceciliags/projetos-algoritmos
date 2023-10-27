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

void tInsere(treenodeptr& arvore, int x)
{
    if (arvore == NULL)
    {
        arvore = new treenode;
        arvore->info = x;
        arvore->esq = NULL;
        arvore->dir = NULL;
    }
    else if (x < arvore->info)
        tInsere(arvore->esq, x);
    else
        tInsere(arvore->dir, x);
}

int emNivel(treenodeptr t)
{
    if (t == NULL)
        return 0;

    treenodeptr n;
    list<treenodeptr> q;
    int depth = 0;

    q.push_back(t);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            n = *q.begin();
            q.pop_front();
            if (n->esq != NULL)
                q.push_back(n->esq);
            if (n->dir != NULL)
                q.push_back(n->dir);
        }
        depth++;
    }

    return depth;
}

int main()
{
    treenodeptr arvore = NULL;
    int x;
    cin >> x;
    while (x != -1)
    {
        tInsere(arvore, x);
        cin >> x;
    }

    int depth = emNivel(arvore);
    cout << depth << endl;

    return 0;
}
