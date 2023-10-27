#include <iostream>
#include <list> //incluindo biblioteca p/ listas

using namespace std;

int main()
{
    list<int> lista;//ponteiro pra lista
    list<int>::iterator i; //ponteiro p/ andar na lista
    int elemento, X, Y;
    bool inseriu;

	//lendo enquanto n�o for igual a -1
    cin >> elemento;
    while(elemento != -1)
    {
        lista.push_front(elemento);//inserindo na lista
        cin >> elemento;
    }

    cin >> X >> Y;


    inseriu = false;
    i = lista.begin();// i recebe a posi��o inicial
    while (!inseriu)
    {
        if (*i == X)//se o elemento armazenado na posi��o i for igual a X
        {
            i++;
            lista.insert(i, Y);//fun��o insert p/ inserir na lsita
            inseriu = true;
        }
        i++;//incrementando em i
    }
    while (!lista.empty())
    {
        cout << lista.front() << " ";
        lista.pop_front();
    }

    return 0;
}