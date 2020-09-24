#include <iostream>

using namespace std;

int main()
{
	int num;
	float alt, altMaior = 0.0;
	float numMaior = 0.0;
	float altMenor = 100000.0;
	float numMenor = 100000.0;
	
	
	for (int i = 0; i <= 9; i++)
	{
		cout << "Digite o numero do aluno: " << endl;
		cin >> num;
		cout << "Digite a altura do aluno em centimetros: " << endl;
		cin >> alt;
		
		
		if ( alt > altMaior)
		{
			altMaior = alt;
			numMaior = num;
		}
		if ( alt < altMenor)
		{
			altMenor = alt;
			numMenor = num;
		}
	}
	
	cout << "" << endl;
	cout << "Numero do maior aluno: " << numMaior << endl;
	cout << "Maior altura: " << altMaior << endl;
	cout << "" << endl;
	cout << "Numero do menor aluno: " << numMenor << endl;
	cout << "Menor altura: " << altMenor << endl;
	
	return 0;
}