#include <iostream>
using namespace std;
int main(){
	
	float monto, descuento;
	
	do{
		cout<<"Ingrese el monto de la compra del cliente: ";
		cin>>monto;
	}while(monto<0);
	
	if(monto>5000){
		descuento=0.3*monto;
	}else{
		if(monto>3000 && monto<=5000){
			descuento=0.2*monto;
		}else
			if(monto>1000 && monto<=3000)
				descuento=0.1*monto;
				else
					descuento=0;
	}
	
	monto=monto-descuento;
	
	cout<<"Descuento por su compra: "<<descuento<<"\n";
	cout<<"Monto a pagar: "<<monto;
	
}
