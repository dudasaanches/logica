#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float number1, number2;
	
	cout <<"Informe o primeiro número:";
	cin >> number1; 
	
	cout <<"Informe o segundo número:";
	cin >> number2; 
	
	if(number1 > number2){
		cout << "Primeiro número é maior";	
	}
	else{
		cout << "Segundo número é maior";
	}
}
