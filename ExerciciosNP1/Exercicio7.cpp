#include <iostream>

using namespace std;

#define num 10

struct ordem
{
	int vet[num];
	int n;
};

int main(int argc, char** argv)
{
	ordem numero;
	numero.vet;
	numero.n = 1;

	for (int i = 0; i < num; i++)
	{
		numero.vet[i] = numero.n;
		numero.n++;
	}
	
	cout << "Ordem normal: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << numero.vet[i] << endl;;
	}
	
	cout << "----------" << endl;
	cout << "Ordem inversa: " << endl;
	
	for (int i = num - 1; i >= 0; i--)
	{
		cout << numero.vet[i] << endl;
	}












	return 0;
}
