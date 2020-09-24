#include <iostream>
#include <locale.h>

using namespace std;

void soma(int a, int b)
{
	int s;
	s = a + b;
	cout << s ;
}

int main(int argc, char** argv)
{
	setlocale(0, "");
	
	int tam, a = 0, b = 0;
	
	cout << "Digite o tamanho dos vetores: " << endl;
	cin >> tam;
	
	int A[tam], B[tam];
	
	for (int i = 0; i <= A[tam]; i++)
	{
		cout << "Digite os valores de A: " << endl;
		cin >> A[i];
		a = a + A[i];
	}
	
	for (int i = 0; i <= B[tam]; i++)
	{
		cout << "Digite os valores de B: " << endl;
		cin >> B[i];
		b = b + B[i];
	}
	
	cout << "----------" << endl;
		
	soma(a, b);
	
	return 0;
}
