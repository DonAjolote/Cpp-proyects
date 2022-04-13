#include <iostream>
#include <math.h>

using namespace std;

int main()
	
	{
		
		float a,b,resultado = 0;
		
		cout << "Cateto 1" << endl;
		cin >> a;
		
		cout << "Cateto 2" << endl;
		cin >> b;
		
		resultado = sqrt(pow(a,2) + pow(b,2));
		
		cout.precision(4);
		cout << "Hipotenusa: " << resultado << endl;
		
		
	return 0;
	}
