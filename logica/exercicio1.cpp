#include <iostream> //padr�o

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, result;
	
	cout <<"Informe a primeira nota:"; 
	cin >> nota1; //recebe o recado	
	
	cout <<"Informe a segunda nota:";
	cin >> nota2;
	
	result= (nota1 + nota2) /2;
	
	cout<< "Sua nota foi de:" << result << "\n\n\n\n\n";
	
	if(result < 7){
		cout << "Brand�o, tente novamente";
	}else if (result >= 7) {
		cout << "Brand�o, n�o fez mais que sua obriga��o";
	}
}
