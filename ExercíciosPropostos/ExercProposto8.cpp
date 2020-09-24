#include <iostream>

using namespace std;

int main()
{
	int vt1 = 0, vt2 = 0;
	int branco = 0, nulo = 0;
	int vt = 0, c = 0;
	int n = 1;
	
	while (n != 0)
	{
		cout << "1 - Primeiro candidato" << endl;
		cout << "2 - Segundo candidato" << endl;
		cout << "3 - Voto nulo" << endl;
		cout << "4 - Voto branco" << endl;
		cout << "0 - Sair" << endl;
		cin >> vt;
		
		switch(vt)
		{
		case 1:
			c++;
			vt1++;
			cout << "Primeiro candidato" << endl;
			break;
		case 2:
			c++;
			vt2++;
			cout << "Segundo candidato" << endl;
			break;
		case 3:
			c++;
			branco++;
			cout << "Voto em branco" << endl;
			break;
		case 4:
			c++;
			nulo++;
			cout << "Voto em nulo" << endl;
			break;
		case 0:
			vt1 = ((float)vt1 / c)* 100;
			vt2 = ((float)vt2 / c) * 100;
			branco = ((float)branco / c) * 100;
			nulo = ((float)nulo / c) * 100;
			
			cout << "Votos prmeiro candidato: " << vt1 
			<< " por cento" << endl;
			
			cout << "Votos segundo candidato: " << vt2
			<< " por cento" << endl;
			
			cout << "Votos em branco: " << branco
			<< " por cento" << endl;
			
			cout << "Votos em nulo: " << nulo
			<< " por cento" << endl;
			
			n = 0;
			break;
		default:
			break;
		}
		
	}
	return 0;
}