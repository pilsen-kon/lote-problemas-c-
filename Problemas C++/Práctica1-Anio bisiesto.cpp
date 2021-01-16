#include <iostream>
using namespace std;
int main(){
	
	int anio;
	bool bisiesto;
	
	do{
		cout<<"Ingrese el año a evaluar: ";
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
		cout<<"El año "<<anio<<" es bisiesto";
	else
		cout<<"El año "<<anio<<" no es bisiesto";			
}
