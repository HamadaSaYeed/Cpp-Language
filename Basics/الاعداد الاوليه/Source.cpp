#include <iostream>
using namespace std;
int main()
{

	// ÇáÚÏÇÏ ÇáÇæáíå

	int number, flage = 0;
	cin >> number;

	int div = number / 2;

	for (int i = 2; i <= div; i++)
	{
		if (number % i == 0)
		{
			cout << "NO  ==> Prime  = " << number;

			flage = 1;

			break;
		}
	}

	if (flage == 0)
	{
		cout << "YES  ==> Prime  = " << number;
	}

	return 0;
}
