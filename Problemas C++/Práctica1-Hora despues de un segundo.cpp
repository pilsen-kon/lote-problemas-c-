#include <iostream>
using namespace std;
int main(){
	
	int dias, horas, minutos, segundos;
	
	do{
		cout<<"Ingrese la cantidad de dias: ";
		cin>>dias;
	}while(dias<0);
	
	do{
		cout<<"Ingrese la cantidad de horas: ";
		cin>>horas;
	}while(horas<0);
	
	do{
		cout<<"Ingrese la cantidad de minutos: ";
		cin>>minutos;
	}while(minutos<0);
	
	do{
		cout<<"Ingrese la cantidad de segundos: ";
		cin>>segundos;
	}while(segundos<0);
	
	segundos=segundos+1;
	if(segundos>=60){
		minutos=minutos+segundos/60;
		segundos=segundos%60;
	}
	if(minutos>=60){
		horas=horas+minutos/60;
		minutos=minutos%60;
	}
	if(horas>=60){
		dias=dias+horas/24;
		horas=horas%24;
	}
			
	cout<<"La hora despues de un segundo es...\n";
	cout<<"Dias: "<<dias<<"\n";
	cout<<"Horas: "<<horas<<"\n";
	cout<<"Minutos: "<<minutos<<"\n";
	cout<<"Segundos: "<<segundos<<"\n";
}
