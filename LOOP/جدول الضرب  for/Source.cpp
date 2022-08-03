 #include <iostream>
  using namespace std;
int main()
{
	int number;
	while (true)
	{
		cout << " enter a number from 0 to 12 " << endl;
		cin >> number;

		for (int x = 0; x <= 12; x++)
		{

			cout << number << " * " << x << " = " << number * x << endl;

		}

	}
	return 0;
}