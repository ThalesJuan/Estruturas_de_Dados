#include <iostream>

using namespace std;

int main()
{
	float horas, vlSal;
	float horat;
	float salBruto;
	float imposto;
	float salr;
	
	cout << "Digite as horas trabalhadas: ";
	cin >> horas;
	cout << "Digite o valor da salario por hora: ";
	cin >> vlSal;
	
	horat = vlSal/2;
	cout << horat << endl;
	
	salBruto = horas * horat;
	cout << "Salario bruto: " << salBruto << endl;
	
	imposto = salBruto*3/100;
	cout << "Imposto: " << imposto << endl;
	
	salr = salBruto - imposto;
	cout << "Salario a receber: " << salr;
	
	return 0;
}