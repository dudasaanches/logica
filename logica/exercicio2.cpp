#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float number1, number2;
	
	cout <<"Informe o primeiro n�mero:";
	cin >> number1; 
	
	cout <<"Informe o segundo n�mero:";
	cin >> number2; 
	
	if(number1 > number2){
		cout << "Primeiro n�mero � maior";	
	}
	else{
		cout << "Segundo n�mero � maior";
	}
}
