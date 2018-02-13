#include<iostream>
#include<locale> //BIBLIOTECA DE IDIOMAS
// PROGRAMA PARA CALCULAR A AREA DE UM RETANGULO
using namespace std;

int main(){ //FUNÇÃO BASICA
	setlocale(LC_ALL, "Portuguese"); //BIBLIOTECA DE LINGUAGEM, DEIXAR EM PORTUGUES
	
	int base, altura, area; //VARIAVEIS DECLARADA COMO 'INTEIRA'
		
		cout << "Olá, iremos calcular a area de uma retangulo " << endl;
		cout << "Digite o tamanho da base: ";
		cin >> base; //VAI LER O NUMERO E POR NA VARIAVEL BASE

		cout << "Digite o tamanho da altura: ";
		cin >> altura; //VAI LER O NUMERO E POR NA VARIAVEL ALTURA

			area = base*altura; //EQUAÇÃO MATEMATICA PARA RESOLVER O ALGORITMO
 
	cout << "A Area desse retangulo é igual a: " << area; //VAI MOSTRAR O RESULTADO QUE ESTÁ EM AREA
 	
	system("PAUSE >> NULL"); //FINALIZAR O PROGRAMA
	return 0;	
}
