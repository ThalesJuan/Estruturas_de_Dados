#include <iostream>
#include <locale.h>

using namespace std;

#define DIAS 4

float mediaTemp(float media)
{
	float t;
	t = media / DIAS;
	return t;
}

int main(int argc, char** argv)
{
	setlocale(0, "");
	
	float temp[DIAS];
	float maior, menor;
	float media = 0;
	int diaInferior = 0;
	
	for (int i = 0; i < DIAS; i++)
	{
		cout << "Digite a temperatura de hoje: " << endl;
		cin >> temp[i];
		media = media + temp[i];
	}
	
	maior = temp[0];
	for (int i = 0; i < DIAS; i++)
	{
		if (maior < temp[i])
		{
			maior = temp[i];
		}
	}
	
	menor = temp[0];
	for (int i = 0; i < DIAS; i++)
	{
		if (menor > temp[i])
		{
			menor = temp[i];
		}
	}
	
	media = mediaTemp(media);
	
	cout << "-------------" << endl;
	
	for (int i = 0; i < DIAS; i++)
	{
		if (temp[i] < media)
		{
			diaInferior++;
		}
	}
	
	cout << "Menor temperatura: " << menor << endl;
	cout << "Maior temperatura: " << maior << endl;
	cout << "Média de temperatura: " << media << endl;
	cout << "Dias com a temperatura inferior a média: " 
	<< diaInferior << endl;
	
	return 0;
}