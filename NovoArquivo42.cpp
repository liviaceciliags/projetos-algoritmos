#include <iostream>

using namespace std;

void soma (int x, int y, int &s){//void = vazia 
	s = x+y;
}
int main()
{
	int x, y;
	int s = 0;
	
	cin >> x >> y;
	
	soma(x,y,s);
	
	cout << "Soma = " << s << endl;
	return 0;
}
