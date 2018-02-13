#include<iostream>
#include<locale>
#include<cmath>
//atividade 06 - area de uma circunferencia
using namespace std;

int main (void){
		setlocale(LC_ALL, "Portuguese");
		
float pre_resultado, resultado_area;
int raio,perimetro;

			cout << "Olá, vamos calcular!" << endl;
			cout << "* area de um ciruculo" << endl;
			cout << "* perimetro de um circulo." <<endl << endl;

			cout << "Digite o raio do circulo? ";
			cin >> raio;
			cout << endl;

		pre_resultado = pow(raio,2);
		resultado_area = (pre_resultado * 3,14); //a area do circulo consiste em o Raio elevado ao quadrado, multiplicado por Pi
		perimetro = ((2*314)*raio);
		
	cout << "Area do Circulo: " << resultado_area;
	cout << "cm²" << endl;
	cout << "O Perimetro do Circulo: " << perimetro;
	cout << "cm";
	
	system("PAUSE >> NULL");
	return 0;
}
