#include <iostream>
using namespace std;

void Mensaje(int &numero);
bool Divisible2(int numero);
bool Divisible3(int numero);
bool Divisible5(int numero);
void Respuestas(bool resp1, bool resp2, bool resp3);

int main(){
	int numero;
	bool resp1, resp2, resp3;
	Mensaje(numero);
	resp1=Divisible2(numero);
	resp2=Divisible3(numero);
	resp3=Divisible5(numero);
	Respuestas(resp1,resp2,resp3);
}

void Mensaje(int &numero){
	cout<<"\n\nIngrese un numero: ";
	cin>>numero;
}

bool Divisible2(int numero){
	if(numero%2==0)
		return true;
	else
		return false;	
}

bool Divisible3(int numero){
	if(numero%3==0)
		return true;
	else
		return false;	
}

bool Divisible5(int numero){
	if(numero%5==0)
		return true;
	else
		return false;	
}

void Respuestas(bool resp1, bool resp2, bool resp3){
	if(resp1)
		cout<<"\nEl numero es divisible entre 2\n";
	if(resp2)
		cout<<"\nEl numero es divisible entre 3\n";
	if(resp3)
		cout<<"\nEl numero es divisible entre 5\n";
	if(resp1==false && resp2==false && resp3==false)
		cout<<"El numero no es divisible entre 2, 3 ni 5";			
}
