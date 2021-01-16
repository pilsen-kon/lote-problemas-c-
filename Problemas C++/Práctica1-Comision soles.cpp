#include <iostream>
using namespace std;
int main(){
	
	float venta, comision;

	do{
		cout<<"Ingrese la venta total del empleado: ";
		cin>>venta;
	}while(venta<0);
	
	if(venta<=150)
		comision=0;
	else{
		if(venta>150 && venta<=400)
			comision=venta*0.1;
		else
			comision=50+venta*0.09;	
	}	
	
	cout<<"La comision correspondiente en soles es: "<<comision;
}
