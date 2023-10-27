#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	int Q1, Q2, D, K;
	double F;
	
	K=100;
	
	cin>> Q1>> Q2>> D;
	
	F = K*((Q1*Q2)/pow(D,2)) ;
	
	cout << fixed << setprecision (2);
	cout << F << endl;
	
	return 0;
	
}

//F=K×((Q1×Q2)/D2)