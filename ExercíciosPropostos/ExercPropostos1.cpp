#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Criando as variaveis
	float peso, altura, imc;
	
	//Pedindo ao usuario o peso e a altura
	cout << "Digite seu peso: ";
	cin >> peso;
	cout << "Digite sua altura: ";
	cin >> altura;
	
	imc = peso / pow(altura, 2);
	if(imc < 20){
		cout << "Abaixo do peso!";
	}
	else if(imc < 25){
		cout << "Peso ideal";
	}
	else if(imc >= 25){
		cout << "Acima do peso!";
	}
	
	return 0;
}