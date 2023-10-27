#include <iostream>

using namespace std;

int main (){
	int X,Y;
	
	
	cin >> X >> Y;
	while ( X != 0 && Y != 0 )
	{
		if (X > 0 && Y > 0)
			cout <<"primeiro"<<endl;
		else if (X < 0 && Y > 0)
			cout <<"segundo"<<endl;
		else if (X < 0 && Y < 0)
			cout <<"terceiro"<<endl;
		else 
			cout <<"quarto"<<endl;
		cin >> X >> Y;
	}
	return 0;
}