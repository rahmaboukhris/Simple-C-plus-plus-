#include<iostream>
#include<locale> //BIBLIOTECA DE IDIOMAS
//atividade 02
// PROGRAMA PARA SOMAR DOIS NUMEROS
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese"); 

	int number1, number2, number3, number4; 
	int soma;

		cout << "Olá, iremos realizar uma soma" << endl << "Digite um numero: ";
		cin >> number1; 

		cout << "Digite mais um numero: ";
		cin >> number2;
		
		cout << "Digite outro numero: ";
		cin >> number3;
		
		cout << "Digite só mais um numero: ";
		cin >> number4;

			soma = number1+number2+number3+number4;

		cout << "Aguarde um momento..." << endl << "A soma é igual a: " << soma;

system("PAUSE >> NULL");
return 0;	
}
