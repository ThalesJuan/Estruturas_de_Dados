#include <iostream>
#include <locale.h>

using namespace std;

#define ALUNOS 20

float mediaNotas(int notas[], int tam)
{
	float total = 0;
	for (int i = 0; i < ALUNOS; i++)
	{
		total += notas[i];
	}
	return total / tam;
}

int main(int argc, char** argv)
{
	setlocale(0, "");
	
	float media;
	int notas[ALUNOS], acima = 0;
	
	for (int i = 0; i < ALUNOS; i++)
	{
		cout << "Digite a nota " << i + 1 << ": " << endl;
		cin >> notas[i];
	}
	
	media = mediaNotas(notas, ALUNOS);
	cout << "M�dia: " << media << endl;
	
	for (int i = 0; i < ALUNOS; i++)
	{
		if (notas[i] > media)
		{
			acima++;
		}
	}
	
	cout << "Valores acima da m�dia: " << acima << endl;
	cout << "Valores abaixo da m�dia: " << ALUNOS - acima << endl;
	
	return 0;
}
