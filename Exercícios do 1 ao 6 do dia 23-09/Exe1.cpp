#include <iostream>
#include <locale.h>

using namespace std;

#define NOMES 10

int main(int argc, char** argv)
{
	setlocale(0, "");
	string nome[NOMES], p, r;
	int i;
	
	for (i = 0; i < NOMES; i++)
	{
		cout << "Digite um nome: " << endl;
		cin >> nome[i];
	}
	
	cout << "--------------" << endl;
	
	cout << "Qual nome deseja procurar: " << endl;
	cin >> p;
	
	for (i = 0; i < NOMES; i++)
	{
		if (p == nome[i])
		{
			r = "ACHEI";
			break;
		}
		else
		{
			r = "NÃO ACHEI";
		}
	}
	
	cout << r << endl;
	
	return 0;
}