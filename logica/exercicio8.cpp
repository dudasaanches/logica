#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float numero;
	
	cout <<"Informe seu n�mero:";
	cin >> numero; 
	
	if(numero < 0){
		cout <<"Negativo";
	}else if(numero >0){
		cout <<"Positivo";
	}else if(numero == 0){
		cout <<"Seu n�mero � neutro";
	}
}
