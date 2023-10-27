#include <iostream>

using namespace std;

int main(){
	int N;
	char name[100];
	
	
	cin>> N;
	
	cin.ignore();
	cin.getline(name,100);
	
	cout<<"Numero: "<< N<<endl;
	cout<<"Nome: "<<name<<endl;
	
	return 0;
	
}