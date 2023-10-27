#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    int NUMBER, horas;
    double valor, SALARY;
    
    cin >> NUMBER;
    cin >> horas;
    cin >> valor;
    
    SALARY = horas*valor;
    
    cout << fixed << setprecision (2);
    cout <<"NUMBER = " << NUMBER << endl;
    cout <<"SALARY = U$" << SALARY << endl;

 
    return 0;
}