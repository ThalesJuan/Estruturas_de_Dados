#include <iostream>
#include <locale.h>

using namespace std;

#define NUMEROS 20

void inverte(int num[])
{
	int tam = 20;
	for (int i = tam - 1; i >= 0; i--)
	{
		cout << num[i] << endl;;
	}
}

int main(int argc, char** argv)
{
	setlocale(0, "");
	
	int num[NUMEROS];
	
	for (int i = 0; i < NUMEROS; i++)
	{
		cout << "Digite um número: " << endl;
		cin >> num[i];
	}
	cout << "-----*-----" << endl;
	
	inverte(num);
	
	return 0;
}