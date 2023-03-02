#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int sabor, recheio, rDividido, adicionais, presente, entrega;
	string tamanho;
	float vTamanho, vSabor, vRecheio, vAdicionais, vPresente, vEntrega, result =0, vTotal =0;
	
	cout << "Informe o tamanho do ovo" << endl;
	cout << "P - pequeno" << endl;
	cout << "M - médio" << endl;
	cout << "G - grande" << endl;
	cout << "R: ";
	cin >> tamanho;
	
	if(tamanho == "P" or tamanho == "M" or tamanho == "G"){
		if(tamanho == "P"){
			vTamanho = 7.80;	
		}else if(tamanho == "M"){
			vTamanho = 12.90;	
		}else if(tamanho == "G"){
			vTamanho = 23.95;	
		}
		
		cout << "Informe o sabor do ovo" << endl;
		cout << "1-Chocolate preto" << endl;
		cout << "2-Chocolate branco" << endl;
		cout << "3-Chocolate ao leite" << endl;
		cout << "R:";
		cin >> sabor;
		
		if(sabor == 1 or sabor == 2 or sabor == 3 ){
			if(sabor == 1){
				vSabor = 9.67;	
			}else if(sabor == 2){
				vSabor = 4.50;	
			}else if(sabor == 3){
				vSabor = 9.32;	
			}
		
				cout << "Informe o recheio do ovo" << endl;
				cout << "1-Chocolate preto" << endl;
				cout << "2-Chocolate branco" << endl;
				cout << "R:";
				cin >> recheio;
				
			if(recheio == 1 or recheio == 2){
				if(sabor == 1){
					vRecheio = 4.83;	
				}else if(sabor == 2){
					vRecheio = 2.25;	
				}
				cout << "Informe se o recheio vai ser dividido em dois:" << endl;
				cout << "1-Sim" << endl;
				cout << "2-Não" << endl;
				cout << "R:";
				cin >> rDividido;
				
				if(rDividido == 1){
					result = result + ( vRecheio / 2);
				}
				
				cout << "Informe se vai querer adicionais:" << endl;
				cout << "1-Sim" << endl;
				cout << "2-Não" << endl;
				cout << "R:";
				cin >> adicionais;
				
				if(adicionais == 1){
				cout << "Informe qula dos adicionais será escolhido:" << endl;
				cout << "1-KitKat" << endl;
				cout << "2-MM'S" << endl;
				cout << "R:";
				cin >> adicionais;
				}
				
				if(adicionais == 1 or adicionais == 2){
				if(adicionais == 1){
					vAdicionais = 4.67;	
				}else if(adicionais == 2){
					vAdicionais = 5.43;	
				}
				}
				
				cout << "Informe se for presente:" << endl;
				cout << "1-Sim" << endl;
				cout << "2-Não" << endl;
				cout << "R:";
				cin >> presente;
				
				
				if(presente == 1){
					vPresente = 2.50
				 }
				}
				
				
			}else {
				cout << "Erro no sistema";
			}
		}
		
		vTotal = result + (vTamanho + vSabor + rDividido + vRecheio + adicionais);
		
		cout<< vTotal;
	}
	
	
}
