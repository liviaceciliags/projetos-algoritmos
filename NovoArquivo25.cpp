#include <iostream>

using namespace std;

struct dados
{
	int num;
};

int main()
{
	dados sorte[10];
	int i;
	int N;
	int soma =0;
	
	cin >> N;
	
	for (i=0; i<N; i++){
		cin>> sorte[i].num;
		if (sorte[i].num%2 ==0)
		soma += sorte[i].num;
	}
	cout << soma; 
	
	return 0;
}