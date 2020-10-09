#include <iostream>

using namespace std;

struct pessoa
{
	string nome[5];
	string endereco[5];
	int cpf[5];
	int idade[5];
};

int main(int argc, char** argv)
{
	pessoa p;
	p.nome;
	p.endereco;
	p.cpf;
	p.idade;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Digite seu nome: " << endl;
		cin >> p.nome[i];
		cout << "Digite seu endereco: " << endl;
		cin >> p.endereco[i];
		cout << "Digite seu CPF: " << endl;
		cin >> p.cpf[i];
		cout << "Digite sua idade: " << endl;
		cin >> p.idade[i];
	}
	
	cout << "-------" << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Nome: " << p.nome[i] << endl;
		cout << "Endereco: " << p.endereco[i] << endl;
		cout << "CPF: " << p.cpf[i] << endl;
		cout << "Idade: " << p.idade[i] << endl;
		cout << "-------" << endl;
	}
	
	
	
	
	return 0;
}









