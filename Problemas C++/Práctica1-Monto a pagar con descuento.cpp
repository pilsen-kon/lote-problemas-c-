#include <iostream>
using namespace std;

void leerDatos(float &monto, int &color);
float descuentoBolita(int color, float monto);
void colorMensaje();

int main(){
	
	float descuento, monto, montoPagar;
	int color;
	
	leerDatos(monto,color);
	descuento=descuentoBolita(color, monto);
	montoPagar=monto-descuento;
	cout<<"El monto a pagar es: "<<montoPagar;
}

void leerDatos(float &monto, int &color){
	do{
		cout<<"Ingrese el monto total de la compra: ";
		cin>>monto;
	}while(monto<0);
	
	colorMensaje();
	
	do{
		cout<<"Ingrese el color de la bolita obtenida: ";
		cin>>color;
	}while(color<=0 || color>5);
}

float descuentoBolita(int color, float monto){
	float descuento;
	switch(color){
		case 1:
			descuento=0;
			break;
		case 2:
			descuento=0.1*monto;
			break;
		case 3:
			descuento=0.25*monto;
			break;
		case 4:
			descuento=0.5*monto;
			break;
		case 5:
			descuento=monto;
			break;						
	}
	return descuento;
}

void colorMensaje(){
	cout<<"\n***Tomando en cuenta lo siguiente...***\n\n";
	cout<<"1=Blanco\t\t2=Verde\t\t\t3=Amarillo\t\t4=Azul\t\t5=Rojo\n\n";
}
