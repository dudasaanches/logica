#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float idade;
	
	cout <<"Informe sua idade:";
	cin >> idade; 
	
		if(idade <16){
		cout << "N�o poder� votar ainda";
	}
	else{
		cout << "Poder� votar";
	}
}
