#include <iostream>
using namespace std;

void evaluarNumero(int num);

int main(){
	
	int numero;
	
	cout<<"Ingrese un numero entero: ";
	cin>>numero;
	
	evaluarNumero(numero);
	
}

void evaluarNumero(int num){
	if(num==0)
		cout<<"El numero es nulo";
	else
		if(num%2==0)
			cout<<"El numero es par";
		else
			cout<<"El numero es impar";		
}
