#include <iostream>

using namespace std;

float soma(float a, float b){
	return a + b;
}

float div(float a, float b){
	return a / b;
}

float mult(float a, float b){
	return a * b;
}

float sub(float a, float b){
	return a - b;
}

main(){
		setlocale(LC_ALL, "Portuguese");
		float numero, numero2;
		int op;
		
		do{
		cout << "Informe o primeiro número:";
		cin >> numero;
		
		cout << "Informe o segundo número:";
		cin >> numero2;
		
		cout << "1- Soma"<< endl;
		cout << "2- Multiplica"<< endl;
		cout << "3- Divida"<< endl;
		cout << "4- Subtrai"<< endl;
		cout << "5- Sair"<< endl;
		cin >> op;
	
		switch(op){
			case 1: cout << soma(numero, numero2) << endl;
				break;
			case 2: cout << mult(numero, numero2) << endl;
				break;
			case 3: cout << div(numero, numero2) << endl;
				break;
			case 4: cout << sub(numero, numero2) << endl;
				break;
			case 5: cout << "Sair";
				break;
			default : cout << "Valor inválido";
		}
	}while(op !=5);
}
