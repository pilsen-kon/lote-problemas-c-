#include <iostream>
using namespace std;
int main(){
	float sueldo, descuento;
	
	cout<<"Ingrese el sueldo que gana: ";
	cin>>sueldo;
	
	if(sueldo<=1000){
		descuento=sueldo*0.1;
		sueldo=sueldo-descuento;
	}
	else{
		if(sueldo>1000 && sueldo<=2000){
			descuento=sueldo*0.15;
			sueldo=sueldo-descuento;
		}
		else{
				descuento=sueldo*0.18;
				sueldo=sueldo-descuento;
			}
		}
	
	cout<<"El descuento que recibir� de su sueldo ser� de: "<<descuento<<" soles\n";
	cout<<"El sueldo neto que recibir� es de: "<<sueldo<<" soles";
	
}
