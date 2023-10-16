#include <iostream>
#include <cmath>

using namespace std;

int main()
{


	int a, b, p;

	p = 1;

	cout << "Vnesi vrednost na a : ";
		cin >> a; 

	cout << "Vnesi vrednost na b : ";
		cin >> b;

		for (int i = a; a <= b; i++)
		{
			if (1 % 2 == 0)
				p *= i;
		}
		cout << "Proizvodot e : " << p << endl;


	cin.get(); cin.get();

	return 0;

}