#include <iostream>

using namespace std;

int hash_aux(int k, int m)
{
	int res;
	res = k % m;
	if (res < 0 )
		res += m;
	return res; 
}


int main (){
	
	int k;
 	int m;
 	
 	do{
		 cin >> k;
		 cin >> m;
		 if (k!= 0 && m!= 0)
		 	cout << hash_aux(k, m) << endl;
	 }while(k!= 0 && m!= 0);
	 
	 return 0;
}