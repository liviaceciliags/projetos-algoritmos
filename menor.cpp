#include <iostream>

using namespace std;

int main()
{
	int x;//le dados
	int n; //quantidade de numeros
	int i; //contador
	int menor;

	cin >> n; //lendo quantidade de numeros

	//lendo e  verificando menor numero
	//lendo 
	menor = 100000;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		
		if (x < menor)
			menor = x;
	}

	cout << "menor: "<<menor <<"cm" << endl;
	
	return 0;
}


/*int i;
int n = 5;
for (i=0;i<n;i++)
	cout << "i = " << i << endl;*/
