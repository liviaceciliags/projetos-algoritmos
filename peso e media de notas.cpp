#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	   double A, B, MEDIA;
	   
	   cout << fixed << setprecision (1);
	   
	   cin >> A >> B;
   	
	   MEDIA = (A*3.5 + B*7.5)/11;
	   
	   cout << setprecision (5) << "MEDIA = " << MEDIA << endl; 

	   return 0;
}