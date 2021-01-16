#include <iostream>
using namespace std;

void Mensajes();
void Datos(int &tipo, float &monto);
float Impuesto(float monto);
float Interes(int tipo, float montoTotal);
float CuotaInicial(int tipo, float interes);
int NumeroLetras(int tipo);
float montoLetra(float interes, float cuotInic, int numletra);

int main(){
	int tipo, numletra;
	float monto, interes, cuotInic, montoTotal;
	Mensajes();
	Datos(tipo,monto);
	montoTotal=Impuesto(monto);
	interes=Interes(tipo,montoTotal);
	cuotInic=CuotaInicial(tipo,interes);
	numletra=NumeroLetras(tipo);
	cout<<"Monto de cada letra por pagar: "<<montoLetra(interes,cuotInic,numletra);
}

void Mensajes(){
	cout<<"*****TIENDA COMERCIAL*****\n\n";
	cout<<"Nro. de letras\t\tTipo Financ.\t\tInteres (%)\t\tCuota Inicial(%)\n";
	cout<<"\t2\t\t\t1\t\t\t5\t\t\t60\n";
	cout<<"\t4\t\t\t2\t\t\t10\t\t\t50\n";
	cout<<"\t6\t\t\t3\t\t\t15\t\t\t35\n\n";
}

void Datos(int &tipo, float &monto){
	do{
		cout<<"Monto de la compra: ";
		cin>>monto;
	}while(monto<0);
	
	do{
		cout<<"Tipo financiamiento: ";
		cin>>tipo;
	}while(tipo<1 || tipo>3);
}

float Impuesto(float monto){
	float total;
	total=1.1*monto;
	return total;
}

float Interes(int tipo, float montoTotal){
	float interes;
	switch(tipo){
		case 1:
			interes=1.05*montoTotal;
			break;
		case 2:
			interes=1.1*montoTotal;
			break;
		case 3:
			interes=1.15*montoTotal;
			break;		
	}
	return interes;
}

float CuotaInicial(int tipo, float montoTotal){
	float inicial;
	switch(tipo){
		case 1:
			inicial=montoTotal*0.6;
			break;
		case 2:
			inicial=montoTotal*0.5;
			break;
		case 3:
			inicial=montoTotal*0.35;
			break;		
	}
	return inicial;
}

int NumeroLetras(int tipo){
	int numletra;
	switch(tipo){
		case 1:
			numletra=2;
			break;
		case 2:
			numletra=4;
			break;
		case 3:
			numletra=6;
			break;		
	}
	return numletra;
}

float montoLetra(float nuevoMonto, float cuotaInicial, int letras){
	float montoxletra;
	montoxletra=(nuevoMonto-cuotaInicial)/letras;
	return montoxletra;
}
