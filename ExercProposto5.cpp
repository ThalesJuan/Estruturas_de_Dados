#include <iostream>

using namespace std;

int main()
{
	float pe, cp, res, resp, per;

	cout << "Digite o preco da etiqueta: ";
	cin >> pe;
	cout << "Digite o codigo da condicao do pagamento: ";
	cin >> cp;



	if (cp == 1)
	{
		cout << "A vista em dinheiro ou cheque, com " <<
			 "10 por cento de desconto" << endl;
		per = 10;
		per = per / 100;
		resp = 1 - per;
		pe = pe * resp;

	}
	else if (cp == 2)
	{
		cout << "A vista com cartao de credito, com " <<
			 "5 por cento de desconto" << endl;
		per = 5;
		per = per / 100;
		resp = 1 - per;
		pe = pe * resp;
	}
	else if (cp == 3)
	{
		cout << "Em 2 vezes, preco normal da etiqueta " <<
			 "sem juros" << endl;
		per = pe / 2;
	}
	else if (cp == 4)
	{
		cout << "Em 3 vezes, preco da etiqueta com " <<
			 "acrescimo de 10 por cento" << endl;
		res = (pe * 10) / 100;
		per = (res + pe) / 3;
	}

	if (cp == 1|| cp == 2)
	{
		cout << "Valor a pagar: " << " R$ " << pe <<
			 " Reais" << endl;
	}
	else if (cp == 3 || cp == 4)
	{
		cout << "Valor da parcela: " << per << " Reais";
	}
	

	





}





