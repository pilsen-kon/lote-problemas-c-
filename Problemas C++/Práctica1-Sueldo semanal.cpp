#include <iostream>
using namespace std;

void leerDatos(int &horasTrabajadas, float &pagoPorHora);
int numHorasExtra(int horasTrabajadas);
float pagoHorasExtra(int horasExtra, float pagoPorHora);
float sueldo(float pagoPorHora, float pagoExtra, int horasExtra, int horasTrabajadas);

int main(){
	
	int horasTrabajadas, horasExtra;
	float pagoPorHora, sueldoSemanal, pagoExtra;
	
	leerDatos(horasTrabajadas, pagoPorHora);
	horasExtra=numHorasExtra(horasTrabajadas);
	pagoExtra=pagoHorasExtra(horasExtra,pagoPorHora);
	sueldoSemanal=sueldo(pagoPorHora,pagoExtra,horasExtra,horasTrabajadas);
	
	cout<<"El sueldo semanal correspondiente es: "<<sueldoSemanal;
	
	return 0;
	
}

void leerDatos(int &horasTrabajadas, float &pagoPorHora){
	cout<<"INGRESE LOS DATOS CORRESPONDIENTES DEL TRABAJADOR\n";
	do{
		cout<<"Ingrese la cantidad de horas trabajadas esta semana: ";
		cin>>horasTrabajadas;
	}while(horasTrabajadas<0);
	
	do{
		cout<<"Ingrese el pagoPorHora de trabajo: ";
		cin>>pagoPorHora;
	}while(pagoPorHora<0);
}

int numHorasExtra(int horasTrabajadas){
	int horasExtra;
	if(horasTrabajadas>40)
		horasExtra=horasTrabajadas-40;
	else
		horasExtra=0;
	return horasExtra;		
}

float pagoHorasExtra(int horasExtra, float pagoPorHora){
	int pago;
	if(horasExtra<=8)
		pago=2*pagoPorHora*horasExtra;
	else{
		pago=pagoPorHora*(2*8+3*(horasExtra-8));
	}
	return pago;	
}

float sueldo(float pagoPorHora, float pagoExtra, int horasExtra, int horasTrabajadas){
	float sueldo;
	if(horasTrabajadas<=40)
		sueldo=pagoPorHora*horasTrabajadas;
	else
		sueldo=pagoPorHora*40+pagoExtra;
	return sueldo;		
}
