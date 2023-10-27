#include <iostream>

using namespace std;

int main()
{


	int n;
	
	cin>> n;//ler um valor
	
	while (n >= 0)//testa a condicao //verifica o valor
	{
		//cout <<"ABC"<< endl;
		//cin>>n;//checa o calor novamente
		
		if (n%2==0)
			cout<<"par"<<endl;
		else 
			cout<<"impar"<<endl;
		cin>>n;//checa o calor novamente
	}
	return 0;
}

//rodando infinito
/*n=10
while(n>=0){
	cout <<n<<endl
	n++
}
*/