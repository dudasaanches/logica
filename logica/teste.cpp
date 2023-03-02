#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	 int option;
	 
	 do {
		 cout << "Selecione uma opção:\n";
		 cout << "1 - Adicionar novo item\n";
		 cout << "2 - Exibir itens existentes\n";
		 cout << "3- Remover itens\n";
		 cout << "4-Sair\n";
		 cin >> option;
		 
			switch (option){	 
			case 1: cout << "Opção 1 selecionada - Adicionar novo item\n";
				break;
				case 2: cout << "Opção 2 selecionada - Exibir itens existentes\n";
				break;
			case 3: cout << "Opção 3 selecionada - Remover itens\n";
				break;
			case 4: cout << "Opção 2 selecionada - Sair\n";
				break;
			default : cout << "item inexistente\n"; 
				break;
			}
	 
	} while(option != 4);
}
