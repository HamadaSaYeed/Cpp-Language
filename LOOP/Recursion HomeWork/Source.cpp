# include <iostream>
using namespace std;
int fun(int n)
{
	if (n == 0)
	{

		return 1;

	}

	else
	{

		return 7 + fun(n - 2);

	}

}
//fun(4)
//7+fun(2) = 15
//7+fun(0) = 8
//1
int main()
{

	cout << fun(4) << endl;

	return 0;
}