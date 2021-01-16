#include <iostream>
using namespace std;
int main(){
	
	float num1, num2, num3, numMayor, numMenor, numMedio;
	
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	
	cout<<"Ingrese el tercer numero: ";
	cin>>num3;
	
	if(num1==num2 && num1==num3){
		numMayor=num1;
		numMedio=num2;
		numMenor=num3;
		cout<<"Los tres numeros son iguales\n";
	}
	
	if(num1==num2 && num1!=num3){
		cout<<"Hay dos numeros iguales\n";
		if(num1>num3){
			numMayor=num1;
			numMedio=num2;
			numMenor=num3;
		}
		else{
			numMayor=num3;
			numMedio=num2;
			numMenor=num1;
		}
	}
	
	if(num1==num3 && num1!=num2){
		cout<<"Hay dos numeros iguales\n";
		if(num1>num2){
			numMayor=num1;
			numMedio=num3;
			numMenor=num2;
		}
		else{
			numMayor=num2;
			numMedio=num3;
			numMenor=num1;
		}
	}
	
	if(num2==num3 && num2!=num1){
		cout<<"Hay dos numeros iguales\n";
		if(num2>num1){
			numMayor=num3;
			numMedio=num2;
			numMenor=num1;
		}
		else{
			numMayor=num1;
			numMedio=num2;
			numMenor=num3;
		}
	}
	
	if(num1>num2 && num1>num3){
		numMayor=num1;
		if(num2>num3){
			numMedio=num2;
			numMenor=num3;
		}
		else{
			numMedio=num3,
			numMenor=num2;
		}
	}
	
	if(num2>num1 && num2>num3){
		numMayor=num2;
		if(num1>num3){
			numMedio=num1;
			numMenor=num3;
		}
		else{
			numMedio=num3,
			numMenor=num1;
		}
	}
	
	if(num3>num1 && num3>num2){
		numMayor=num3;
		if(num1>num2){
			numMedio=num1;
			numMenor=num2;
		}
		else{
			numMedio=num2,
			numMenor=num1;
		}
	}
	
	cout<<"El numero mayor es: "<<numMayor<<"\n";
	cout<<"El numero medio es: "<<numMedio<<"\n";
	cout<<"El numero menor es: "<<numMenor<<"\n";
	
}
