#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	float combustivel, result; 
	bool mentiroso = false;
	int carro, tipo, portas, pessoas, bagageiros;
	
	while (mentiroso == false){
		cout <<	"1- BMW" << endl;
		cout <<	"2- Audi" << endl;
		cout << "3- Fiat" << endl;
		cout << "4- Ferrari" << endl;
		cout << "R: ";
		cin >> carro;
		system("cls");
		
		if (carro == 1 or carro == 2 or carro == 3 or carro == 4){
			mentiroso = true;
		}else {
			mentiroso = false;
		}
	}
	
	if (carro == 1){
		cout << "Carro BMW" << endl;
	}else if (carro == 2){
		cout << "Carro Audi" << endl;
	}else if (carro == 3){
		cout << "Carro Fiat" << endl;
	}else if (carro == 4){
		cout << "Carro Ferrari" << endl;
	}
	
	mentiroso = false;

	while (mentiroso == false){
		cout << "1- Gasolina" << endl;
		cout << "2- Álcool" << endl;
		cout << "R:";
		cin >> tipo;
		system("cls");
		
		if (tipo == 1 or tipo == 2){
			mentiroso = true;
		}else {
			mentiroso = false;
		}
	}
	
	//bmw	
	if (carro == 1 && tipo == 1){
		combustivel = 9.8;
	}else if (carro == 1 && tipo == 2){
		combustivel = 8.9;
		cout << "\n";
	}
	//Audi
	if (carro == 2 && tipo == 1){
		combustivel = 12.8;
	}else if (carro == 2 && tipo == 2){
		combustivel = 10.9;
		cout << "\n";
	}	
	//Fiat
	if (carro == 3 && tipo == 1){
		combustivel = 26.8;
	}else if (carro == 3 && tipo == 2){
		combustivel = 24.9;	
		cout << "\n";
	}
	//Ferrari
	if (carro == 4 && tipo == 1){
		combustivel = 13.8;
	}else if (carro == 4 && tipo == 2){
		combustivel = 12.9;
		cout << "\n";
	}
	
	result = result + combustivel;
	
	cout << "Informe a quantidade de portas do seu carro:";
	cin >> portas;
	
	if (portas > 4){
		cout << "Irá diminuir 0,5L/Km"<<endl;
		result = result - 0.5;	
	}
	
	cout << "Informe a quantidade de pessoas em seu carro:";
	cin >> pessoas;
	
	if (pessoas > 2){
		cout << "Irá diminuir 1.2L/Km"<<endl;
		result = result - 1.2;
	}
	
	cout << "Informe se o seu carro está com bagageiro:";
	cin >> bagageiros;
	
	if (bagageiros == 1){
		cout << "Irá diminuir 0.2L/Km"<<endl;
		result = result - 0.2;
	}
	
	 cout << result;	
}
