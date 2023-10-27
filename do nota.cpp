#include <iostream>

using namespace std;

int main (){
	
	int nota;
	
	
	cin>>nota;
	do {
		
		if (nota > 60 && nota < 100)
			cout << "Passou"<<endl;
		else if (nota > 0 && nota <=60 )
			cout << "nao passou"<<endl;
		else 
			cout << "invalido"<<endl;
		cin>> nota;
	}
	while ( nota >= 0 && nota < 100);
	
	return 0;
}