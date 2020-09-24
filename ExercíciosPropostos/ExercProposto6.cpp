#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int c = 0;
	int n;
	
	for (int i = 0; i <= 19; i++)
	{
		c++;
		n = c*c;
		cout << "Numero: " <<  c << endl;
		cout << "Dobro do numero: " << n << endl;
	}
	return 0;
}