#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
 
    double x1, y1, x2, y2, distancia;
    
    cout << fixed << setprecision (1);  
 	cin >> x1 >> y1; 
	cin >> x2 >> y2;
	
	
	distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
 	

    cout << fixed << setprecision(4) << distancia << endl;
    
	return 0;
}