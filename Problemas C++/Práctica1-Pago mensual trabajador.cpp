#include <iostream>
using namespace std;
int main(){
	float pagoPorHora, pagoSemanal;
	int horasTrabajadas;
	
	cout<<"Ingrese el total de horas trabajadas: ";
	cin>>horasTrabajadas;
	
	cout<<"Ingrese el pago por hora del trabajador: ";
	cin>>pagoPorHora;
	
	if(horasTrabajadas>40){
		int horasExtra=horasTrabajadas-40;
		pagoSemanal = (40 + (horasExtra)*1.5)*pagoPorHora;
	}
	else{
		pagoSemanal = horasTrabajadas*pagoPorHora;
	}


	if(pagoSemanal>500){
		pagoSemanal=0.9*pagoSemanal;
	}	
	
	cout<<"El pago semanal correspondiente a este trabajador es de "<<pagoSemanal<<" soles";
}

