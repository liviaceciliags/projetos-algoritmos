#include <iostream>
using namespace std;

int main()
{
	int X;
	cin>> X;
	
	while ( X!= 2002)
	{
		cout << "Senha Invalida"<< endl;
		
		cin >> X;
	}
	
	cout <<"Acesso Permitido"<<endl;
	return 0;
}