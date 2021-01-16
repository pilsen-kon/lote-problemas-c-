#include <iostream>
using namespace std;
int main(){
	
	int meses, anios, tiempo;
	float utilidad, sueldo;
	
	cout<<"Ingrese el tiempo que trabajo en la empresa en años y meses\n";
	do{
		cout<<"years: ";
		cin>>anios;
	}while(anios<0);
	
	do{
		cout<<"Meses: ";
		cin>>meses;
	}while(meses<0);
	
	do{
		cout<<"Ingrese su sueldo mensual: ";
		cin>>sueldo;
	}while(sueldo<0);
	
	tiempo=meses+12*anios;
	
	if(tiempo<12)
		utilidad=0.05*sueldo;
	else
		if(tiempo>=12 && tiempo<2*12)
			utilidad=0.07*sueldo;
		else
			if(tiempo>=2*12 && tiempo<5*12)
				utilidad=0.1*sueldo;
			else
				if(tiempo>=5*12 && tiempo<12*10)
					utilidad=0.15*sueldo;
				else
					utilidad=0.2*sueldo;	
							
	cout<<"Utilidad correspondiente: "<<utilidad;
		
}
