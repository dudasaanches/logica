#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float nascimento, result;
	
	cout <<"Informe o seu nascimento:";
	cin >> nascimento;
	
	result = (2023 - nascimento);
	
	if(result){
		cout <<"Sua idade é de:" <<result;
	}
}
