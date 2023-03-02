#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	int semana;
	
	cout << "Informe o dia da semana de 1 a 7: ";
	cin >> semana;
	
	switch(semana){
		case 1: cout << "Domingo";
		break;
		case 2: cout << "Segunda";
		break;
		case 3: cout << "Terça";
		break;
		case 4: cout << "Quarta";
		break;
		case 5: cout << "Quinta";
		break;
		case 6: cout << "Sexta";
		break;
		case 7: cout << "Sabádo";
		break;
		default: cout << "Dia inexistente";
	}
}
