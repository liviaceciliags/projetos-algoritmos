#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char texto[50]; 
	int i;
	int tamanho;
	
	cin.getline(texto,50);
	tamanho = strlen(texto);
	for (i = 0; i <= tamanho; tamanho--)
		cout<<texto[tamanho];
	
	
	return 0;
}
