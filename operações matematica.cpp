#include<iostream>
#include<cmath> //biblioteca de matematica
#include<locale>
//atividade 15 - lista de PH - informatica
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese,");
	
	float number;
	float result_rai, resultado_sqrt, resultado_cbrt, resultado_pow_two, resultado_pow_three;
	
			cout << "Olá, iremos fazer as seguintes operações matematica" << endl << endl;
			cout << "* Raiz Quadrada" << "  " << "* Raiz Cubiba"  << endl;
			cout << "* Potenciação - quadrado" << "  " << "* Potenciação - cubo" << endl << endl;
	
	cout << "Digite um numero para realizar essas operações: "; 
	cin >> number;
	cout << endl;
	
		resultado_sqrt = sqrt(number); //função matematica ~~ raiz quadrada
		resultado_cbrt = cbrt(number); //função matematica ~~ raiz cubica
		resultado_pow_two = pow(number,2); //função matematica ~~ elevado ao quadrado (primeiro a base, segundo o expoente)
		resultado_pow_three = pow(number, 3); //função matematica ~~ elevado ao cubo
	
	cout << "- A raiz quadrada de: " << number << endl;
	cout << "- É igual a : " << resultado_sqrt << endl << endl;
	
	cout << "- A raiz cubica de : " << number << endl;
	cout << "- É igual a: " <<  resultado_cbrt << endl << endl;
	
	cout << "- A potenciação de: " << number << endl;
	cout << "- É igual a: " << resultado_pow_two << endl << endl;
	
	cout << "- A potenciação de: " << number << endl;
	cout << "- É igual a: " << resultado_pow_three << endl << endl;
	
	system ("PAUSE >> NULL");
	return 0;
}
