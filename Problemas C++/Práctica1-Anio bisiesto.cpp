#include <iostream>
using namespace std;
int main(){
	
	int anio;
	bool bisiesto;
	
	do{
		cout<<"Ingrese el a�o a evaluar: ";
		cin>>anio;
	}while(anio<0);
	
	if(anio%100==0 && anio%400==0)
		bisiesto=true;
	else
		if(anio%4==0 && anio%100!=0)
			bisiesto=true;
		else
			bisiesto= false;
			
	if(bisiesto)
		cout<<"El a�o "<<anio<<" es bisiesto";
	else
		cout<<"El a�o "<<anio<<" no es bisiesto";			
}
