#include <iostream>

using namespace std;

int main(){
	double x;
	int n;
	int i;
	int d;
	d = 0;
	n = 6;
	for( i = 0; i<n; i++){
		cin>>x;
		if (x>0){
			d = d +1;
		}
		
	}
	cout << d << " valores positivos"<< endl; 
	
	return 0;
}

