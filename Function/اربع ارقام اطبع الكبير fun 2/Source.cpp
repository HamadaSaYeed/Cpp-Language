# include <iostream>
using namespace std;

int  mixmume(int a, int b, int c, int d)

{ // 3 5 2 7
	int max = a;

	if (b > max)
	{
		max = b;
	}

	if (c > max)
	{
		max = c;
	}

	if (d > max)
	{
		max = d;
	}

	return max;

}




int main()

{

	int x, y, z, w;

	cout << "enter the numbers" << endl;

	cin >> x >> y >> z >> w;


	cout<<"the number is mix = "<< mixmume(x, y, z, w);


	return 0;

}