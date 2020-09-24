#include <iostream>
#include <locale.h>

using namespace std;

#define A 10

int main(int argc, char** argv)
{
	setlocale(0, "");
	
	int a[A];
	int M[A];
	int X;
	int i;
	
	for (i = 0; i < A; i++)
	{
		cout << "Digite um número: " << endl;
		cin >> a[i];
	}
	
	cout << "------------" << endl;
	
	cout << "Digite o número de multiplicação: " << endl;
	cin >> X;
	
	cout << "------------" << endl;
	
	for (i = 0; i < A; i++)
	{
		M[i] = a[i] * X;
	}
	
	for (i = 0; i < A; i++)
	{
		cout << M[i] << endl;
	}
	
	return 0;
}
