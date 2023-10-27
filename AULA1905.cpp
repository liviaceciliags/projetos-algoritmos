#include <iostream>
#include <list>

using namespace std;

typedef struct Card
{
	int number;
	int naipe;

} Card;

typedef struct Node
{
	Card data;
	Node *right;
	Node *left;

} Node;

//Card data � a carta que desejo adicionar na �rvore
Node * insert (Node *curr, Card data)
{
	if (curr == NULL)//se for nulo cria um novo n�
	{
		Node *a = new Node; //cria-se um novo ponteiro de n� que aponta para um novo n�
		a->data = data; //o pont a recebe os dados de Card passado por parametro
		a->right = NULL;
		a->left = NULL;
		return a; //retorna o endere�o de mem�ria onde se est� armazenado A
		//logo a raiz recebe o A
	}
	else
	{
		if(data.number >= curr->data.number) //vai para a direita
		{
			curr->right = insert(curr->right, data);
			return curr->right; //insere o elemento na sub�rvore direita
		}
		else //vai para a esquerda
		{
			curr->left = insert(curr->left, data);
			return curr->left; //insere o elemento na sub�rvore esquerda
		}
	}
}

Node * search (Node * curr, int number)
{
	if (curr == NULL)
		return NULL;
	if (curr->data.number == number)
	{
		return curr;
	}
	else
	{
		if(number >= curr->data.number )
		{
			return search(curr->right, number);
		}
		else
		{
			return search(curr->left, number);
		}
	}
}

void show_ordene(Node *curr)
{
	//varrer a esquerda
	if (curr->left != NULL)
		show_ordene(curr->left);

	//exibir
	if (curr != NULL)
		cout << curr->data.number << endl;
	//varrer a direita
	if (curr->right != NULL)
		show_ordene(curr->right);
}

int main()
{
	Node * root = NULL;

	Card card;
	card.number = 1;
	card.naipe = 1;

	root = insert(root, card);

	card.number = 13;
	card.naipe = 3;

	insert(root, card);
	
	card.number = 10;
	card.naipe = 5;

	insert(root, card);

	Node * a = search(root, 1);

	if (a == NULL)
		cout << "A carta n�o foi encontrada!" << endl;
	else
	{
		cout << a->data.number << endl;
		cout << a->data.naipe << endl;
	}

	show_ordene(root);
	return 0;
}
