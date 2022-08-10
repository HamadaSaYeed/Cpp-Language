#include <iostream>

using namespace std;


int fun(int x, int y, int z, int w)

{

	if (x > y && x > z && x > w)

	{

		cout << "the number is maix : " << x << endl;

		return x;
	}




	else  if (y > x && y > z && y > w)

	{

		cout << "the number is maix : " << y << endl;

		return y;
	}




	else  if (z > x && z > y && z > w)

	{

		cout << "the number is maix : " << z << endl;

		return z;
	}


	else  if (w > x && w > y && w > z)

	{

		cout << "the number is maix : " << w << endl;

		return w;
	}

}



int main()

{

	int x, y, z, w;

	cout << "enter the numbers" << endl;

	cin >> x >> y >> z >> w;


	fun(x, y, z, w);


	return 0;

}