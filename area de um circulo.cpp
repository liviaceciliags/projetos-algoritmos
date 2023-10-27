#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double n;
    double raio;
    double area;
    
    n = 3.14159;
    
    cin >> raio;
    
    area = n*raio*raio;
    
    cout << fixed << setprecision(4);
    cout << "A = " << area << endl;
    return 0;
}