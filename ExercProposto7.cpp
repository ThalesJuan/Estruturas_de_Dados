#include <iostream>

using namespace std;

int main()
{
	int c = 0;
	for (int i = 0; i <= 500; i++)
	{
		if (c % 5 == 0)
		{
			cout << c << endl;
		}
		c++;
	}
	return 0;
}