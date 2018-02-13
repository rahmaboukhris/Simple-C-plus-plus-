#include<iostream>
#include<cmath>
#include<locale>
//atividade 16-> a) calculo de trapezio
using namespace std;

int main (void){
	setlocale(LC_ALL, "Portuguese");
	
	int base_maior, base_menor, altura;
	float area_trap;
	
		cout << "** Olá, iremos calcular a area de um trapézio" << endl;
		cout << "** Precisaremos de três itens: - Altura - Base Menor - Base Maior" << endl;

			cout << "- Digite a altura do trapézio: ";
			cin >> altura;
			cout << "- Digite a base menor do trapézio: ";
			cin >> base_menor;
			cout << "- Digite a base maior do trapézio: ";
			cin >> base_maior;	
	
				area_trap = ((base_maior + base_menor) * altura)/2; //calculo matematico - area trapézio
	
		cout << endl;
		cout << "A Área do trapézio é : " << area_trap << "cm²";	
	
	system("PAUSE >> NULL");
	return 0;
}
