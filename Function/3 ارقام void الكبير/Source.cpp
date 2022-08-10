#include<iostream>
using namespace std;

int maix(int x, int y, int z)

{

	if (x > y && x > z)

	{


		cout << x << "  : is the maxmium number \n";

		return x;
	}

	else if (y > x && y > z)

	{


		cout << y << "  : is the maxmium number \n";
	
		return y;

	}

	else if (z > x && z > y)

	{

		cout << z << "  : is the maxmium number \n";
		
		return z;

	
	}


}
int main()
{

	int g, h, j;

	cout << "enter the numbers ?" << endl;
	
	cin >> g >> h >> j;
	
	
	maix(g , h , j);

	return 0;
}