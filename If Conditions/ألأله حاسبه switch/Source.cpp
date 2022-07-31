  # include <iostream>
 using namespace std;
int main()
{
	while (true)
	{
		double num1;

		char op;

		double num2;

		cout << " enter the values " << endl;

		cin >> num1 >> op >> num2;


		switch (op)

		{

		case '+':

			cout << num1 + num2 << endl;

			break;


		case '-':

			cout << num1 - num2 << endl;

			break;


		case '/':

			cout << num1 / num2 << endl;

			break;


		case '*':

			cout << num1 * num2 << endl;

			break;

	
		default:

			cout << "Error" << endl;

		}



	}




}