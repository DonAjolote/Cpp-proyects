#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int opcion;
	int retirar, depositar, saldo, balance = 1000;
	
	
	cout << "Cajero ATM BBVA \n" << endl;
	cout << "Elige una operacion \n1.-Retirar \n2.-Depositar \n3.-Consultar saldo \n4.-Salir \n" << endl;
	cin >> opcion;	
	
	switch(opcion)
	{
		case 1:
			cout << "¿Cuanto quieres retirar? ";
			cin >> retirar;
			if(retirar > balance){
				cout << "La cantidad introducida es mayor al saldo disponible. \nSaldo actual:" << balance;
			}
			else{
				saldo = balance - retirar;
				cout << "La operacion se ha realizado con exito. \nSaldo actual:" << saldo;
			}
			break;
						
	
		case 2:
			cout << "¿Cuanto quieres depositar?";
			cin >> depositar;
			saldo = balance + depositar;
			cout << "La operacion se ha realizado con exito. \nSaldo actual:" << saldo;
			break;
			
			
		case 3:
			cout << "Este es su saldo actual: " << balance;
			break;
			
		case 4:
			cout << "Saliendo...";
			break;	
		
		
		default: 
			cout << "Esa opcion no es valida";
			break;
		
		
	}
	
	
	return 0;
}
