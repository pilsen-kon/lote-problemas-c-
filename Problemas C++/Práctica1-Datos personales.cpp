#include <iostream>
using namespace std;
int main(){
	
	int numero, edad, numEstdCivil, numSexo;
	string estadoCivil, sexo;
	do{
		cout<<"Nota\n";
		cout<<"La primera cifra debe ser:\n";
		cout<<"1=soltero\n2=casado\n3=viudo\n4=divorciado\n\n";
		cout<<"La dos siguientes cifras debe ser tu edad\n\n";
		cout<<"La ultima cifra representa tu sexo y debe ser:\n";
		cout<<"1=femenino\n2=casado\n\n";
		cout<<"Ingrese un numero entero de cuatro cifras: ";
		cin>>numero;
	}while(numero<1001 || numero>5000);
	
	numEstdCivil=numero/1000;
	
	if(numEstdCivil==1){
		estadoCivil="Soltero";
	}else{
		if(numEstdCivil==2){
			estadoCivil="Casado";
		}else{
			if(numEstdCivil==3){
				estadoCivil="Viudo";
			}else{
				if(numEstdCivil==4){
				estadoCivil="Divorciado";
			}
		}
	}
}
	
	edad=numero%1000/10;
	
	numSexo=numero%1000-edad*10;
	
	if(numSexo==1){
		sexo="Femenino";
	}else{
		if(numSexo==2){
			sexo="Masculino";
		}else{
			sexo="Error! Numero ingresado no valido";
		}
	}
	
	cout<<"\n";
	cout<<"Estado civil: "<<estadoCivil<<"\n";
	cout<<"Edad: "<<edad<<"\n";
	cout<<"Sexo: "<<sexo<<"\n";
	
}
