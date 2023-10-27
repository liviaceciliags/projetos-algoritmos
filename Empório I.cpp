#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double preco, pagamento, troco;
	char nome[100];
	char cidade[100];
	int  codigo, idade, queijo, geleia, doce, refrigerante, sorvete, presuntocru, vinho;

	queijo = 1;
	geleia = 2;
	doce = 3;
	refrigerante = 4;
	sorvete = 5;
	presuntocru = 6;
	vinho =	7;

	cin >> codigo >> preco;
	cin.ignore();
	cin.getline (nome, 100);
	cin.getline (cidade, 100);
	cin >> idade >> pagamento;

	if (pagamento >= preco)
	{
		switch (codigo)
		{
		case 1:
			troco = pagamento - preco;
			cout << "Queijo" << endl;
			cout << fixed << setprecision (2);
			cout << "Valor total = " << preco << endl;
			cout << "Troco = " << troco << endl;
			break;
		case 2:
			troco = pagamento - preco;
			cout << "Geleia" << endl;
			cout << fixed << setprecision (2);
			cout << "Valor total = " << preco << endl;
			cout << "Troco = " << troco << endl;
			break;
		case 3:
			troco = pagamento - preco;
			cout << "Doce" << endl;
			cout << fixed << setprecision (2);
			cout << "Valor total = " << preco << endl;
			cout << "Troco = " << troco << endl;
			break;
		case 4:
			troco = pagamento - preco;
			cout << "Refrigerante" << endl;
			cout << fixed << setprecision (2);
			cout << "Valor total = " << preco << endl;
			cout << "Troco = " << troco << endl;
			break;
		case 5:
			troco = pagamento - preco;
			cout << "Sorvete" << endl;
			cout << fixed << setprecision (2);
			cout << "Valor total = " << preco << endl;
			cout << "Troco = " << troco << endl;
			break;
		case 6:
			troco = pagamento - preco;
			cout << "Presunto cru" << endl;
			cout << fixed << setprecision (2);
			cout << "Valor total = " << preco << endl;
			cout << "Troco = " << troco << endl;
			break;
		default:
			troco = pagamento - preco;
			cout << "Vinho" << endl;
			cout << fixed << setprecision (2);
			cout << "Valor total = " << preco << endl;
			cout << "Troco = " << troco << endl;
			break;
		}
	}
	return 0;
}
