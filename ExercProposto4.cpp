#include <iostream>

using namespace std;

int main()
{
	float sal;
	float reajuste;
	
	cout << "Digite seu salario: ";
	cin >> sal;
	
	if (sal < 1000){
		reajuste = (sal * 15) /100;
		cout << "Reajuste de 15 porcento " 
			 << "= " << reajuste << endl;
	}
	else if(sal >= 1000 && sal <= 1500){
		reajuste = (sal * 10) /100;
		cout << "Reajuste de 10 porcento "
			 << "= " << reajuste << endl;
	}
	else if(sal > 1500){
		reajuste = (sal * 5) / 100;
		cout << "Reajuste de 5 porcento "
			 << "= " << reajuste << endl;
	}

	return 0;
}