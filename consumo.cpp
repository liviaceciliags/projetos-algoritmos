#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int X;
    double Y;
    double consumo;
    
    
    cin >> X >> Y;
    
    consumo = X/Y;
    
    
    cout << fixed << setprecision (3) << consumo << " km/l" << endl;
    
    return 0;
}