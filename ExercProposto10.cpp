#include <iostream>

using namespace std;

int main()
{
	int id, op, c = 0;
	int totId = 0;
	float op1 = 0, op2 = 0, op3 = 0, op4 = 0;
	float mediaId = 0.0;
	
	int n = 1;
	while(n != 0)
	{
		cout << "Qual a sua opiniao ?" << endl;
		cout << "1 - Otimo" << endl;
		cout << "2 - Bom" << endl;
		cout << "3 - Regular" << endl;
		cout << "4 - Ruim" << endl;
		
		cout << "Digite sua idade: " << endl;
		cin >> id;
		totId += id;
		
		if (id <= 0)
		{
			break;
		}
		
		cout << "Digite sua opniao: " << endl;
		cin >> op;
		if (op == 1)
		{
			op1++;
		}
		else if (op == 2)
		{
			op2++;
		}
		else if (op == 3)
		{
			op3++;
		}
		else if (op == 4)
		{
			op4++;
		}
		
		c++;
	}
	
	op1 = ((float)op1/c) * 100;
	op2 = ((float)op2/c) * 100;
	op3 = ((float)op3/c) * 100;
	op4 = ((float)op4/c) * 100;
	
	mediaId = ((float)totId / c);
	
	cout << "" << endl;
	cout << "Total de pessoas que responderam a pesquisa: " << c << endl;
	cout << "" << endl;
	cout << "Media de idade: " << mediaId << endl;
	cout << "" << endl;
	cout << "Otimo: " << op1 << " por cento" << endl;
	cout << "Bom: " << op2 << " por cento" << endl;
	cout << "Regular: " << op3 << " por cento" << endl;
	cout << "Ruim: " << op4 << " por cento" << endl;
	
	return 0;
}