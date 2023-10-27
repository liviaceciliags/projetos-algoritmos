#include <iostream>
using namespace std;

int main()
{
    int N, m3,m4, total;
    
    cin >> N;
    
    if (1<=N<100000){
        m3=N/3;
        N=N%3;
        m4=N/4;
        total= m3+m4;
        
        cout <<total; 
        
    }
return 0;
}