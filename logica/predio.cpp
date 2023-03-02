#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	string nome;
	int andar;
	
	cout << "Informe seu nome: ";
	cin>> nome;
	
	cout <<"Qual andar deseja acessar? ";
	cin>> andar;
	
	if(andar == 2 || andar == 4 || andar == 6 || andar == 8 || andar == 10){
		if(nome == "Marcelo"){
			cout << "Você não tem acesso ao andar " << andar << endl;
		}
		
		else if(nome == "Maria"){
			cout << "Você não tem acesso ao andar " << andar << endl;
		}
		
		else if(nome == "Carlos"){
			cout << "Você não tem acesso ao andar " << andar << endl; 
		}
		
		else if(nome == "Igor"){
			cout << "Você tem acesso ao andar " << andar << endl;
		}
		
		else if(nome == "Ana"){
			cout << "Você tem acesso ao andar " << andar << endl;
		}
		else if(nome == "Pedro"){
			cout << "Você tem acesso ao andar " << andar << endl;
		}
	}
	else{
		cout << "Você " << nome << "Tem acesso ao andar " << andar << endl; 
	}
}
