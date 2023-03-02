#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	string login, senha;
	
	cout <<"Informe seu login:";
	cin >> login; 
	
	cout <<"Informe sua senha:";
	cin >> senha;
	
	if(login == "admin" && senha == "admin"){
		cout << "Pode entrar";
	}
	else{
		cout << "Login e senha incorretos";
	}
}
