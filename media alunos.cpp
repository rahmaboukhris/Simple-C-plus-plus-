#include<iostream>
#include<locale>
//Programa para testar junção, soma, media e nomes
using namespace std;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	string name; 
	int n1, n2, n3, n4,soma, fimbimestre, media;
	
			cout << "Olá. Seja Bem Vindo \n";
			cout << "Me diz seu nome: ";
			getline(cin, name);
		
			cout << "Sejá bem vindo, " << name << "." << endl;
			
			cout << "* Qual a sua nota do 1º bimestre ";
			cin >> n1;
			
			cout << "* Qual a sua nota do 2º bimestre ";
			cin >> n2;
			
			cout << "* Qual a sua nota do 3º bimestre ";
			cin >> n3;
			
			cout << "* Qual a sua nota do 4º bimestre ";
			cin >> n4;
		
	soma = n1 + n2 + n3 + n4;
	media = soma / 4;
	
			cout << endl;
			cout << "** O Somatório das suas notas foi igual á: " << soma;
			cout << endl;
			cout << "** Sua média final foi, " << media;
			cout << endl;
	
	if (media>=7)
		cout << "Parabéns " << name  << "! Você foi aprovado";
	else
		cout << "Desculpa " << name << "...mas você foi reprovado.";

	system("PAUSE");		
	return 0;			
}
