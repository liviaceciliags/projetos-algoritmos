#include <iostream>
using namespace std;

int main()
{
    char l; 
    int valor;
    
    cin >> l;
    
    valor = (int)l;
    
    if (33<valor && valor<127){
        cout <<valor;
    }

    return 0;

}