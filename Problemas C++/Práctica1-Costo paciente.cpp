#include <iostream>
using namespace std;

void Mensajes(int &tipo, int &edad, int &dia);
void TipoEnfermedad(int edad, int tipo, int dia, float &costoTotal);

int main(){
	int edad, tipo, dia;
	float costoTotal;
	Mensajes(tipo, edad, dia);
	TipoEnfermedad(edad, tipo, dia, costoTotal);
	cout<<"\nEl costo total del paciente es: "<<costoTotal;
}

void Mensajes(int &tipo, int &edad, int &dia){
	cout<<"*****HOSPITAL DEL CALLAO*****\n\n";
	cout<<"\tTipo de Enfermedad\tCosto/Paciente\n";
	cout<<"\t\t0\t\t\t25\n";
	cout<<"\t\t1\t\t\t16\n";
	cout<<"\t\t2\t\t\t20\n";
	cout<<"\t\t3\t\t\t32\n\n";
	do{
		cout<<"Ingrese el Tipo de Enfermedad: ";
		cin>>tipo;
	}while(tipo<0||tipo>3);
	
	do{
		cout<<"Ingrese la edad del paciente: ";
		cin>>edad;
	}while(edad<0);
	
	do{
		cout<<"Dias de hospitalizacion del paciente: ";
		cin>>dia;
	}while(dia<=0);	
}

void TipoEnfermedad(int edad, int tipo, int dia, float &costoTotal){
	switch(tipo){
		case 0:
			if(edad>14 && edad<22)
				costoTotal=25*dia*1.1;
			else
				costoTotal=25*dia;
			break;
		case 1:
			if(edad>14 && edad<22)
				costoTotal=16*dia*1.1;
			else
				costoTotal=16*dia;
			break;
		case 2:
			if(edad>14 && edad<22)
				costoTotal=20*dia*1.1;
			else
				costoTotal=20*dia;
			break;
		case 3:
			if(edad>14 && edad<22)
				costoTotal=32*dia*1.1;
			else
				costoTotal=32*dia;
			break;					
	}
}
