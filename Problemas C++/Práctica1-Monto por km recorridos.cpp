#include <iostream>
using namespace std;
int main(){
	
	int kilometros,tarifa;
	
	do{
		cout<<"Ingrese la distancia entera de km recorridos: ";
		cin>>kilometros;
	}while(kilometros<0);
	
	if(kilometros<=300){
		tarifa=250;
	}else{
		if(kilometros>300 && kilometros<1000){
			tarifa=250+(kilometros-300)*30;
		}else{
			tarifa=250+700*30+(kilometros-1000)*20;
		}
	}		
	
	cout<<"El monto a pagar es: "<<tarifa<<" soles";
	
}
