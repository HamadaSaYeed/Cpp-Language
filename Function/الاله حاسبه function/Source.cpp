# include <iostream>

using  namespace std;

double sum(double x, double y)   // 1

{

	return (x + y);

}

double sub(double x, double y)   // 2

{

	return (x - y);

}


double mul(double x, double y)   // 3

{

	return (x * y);

}

double div(double x, double y)   // 4

{

	return (double) (x / y);

}

int main()

{
	while (true)
	
	{

		double x, y;

		char op;

		cout << "enter the number one : " << endl;
		cin >> x;

		cout << "enter the opreator : " << endl;
		cin >> op;


		cout << "entre the number tow : " << endl;
		cin >> y;



		switch (op)

		{



		case '+':

			cout << "the sum is : " << sum(x, y) << endl;

			break;





		case '-':

			cout << "the sub is : " << sub(x, y) << endl;

			break;






		case '*':

			cout << "the mul is : " << mul(x, y) << endl;

			break;





		case '/':

			cout << "the div is : " << div(x, y) << endl;

			break;




		default:

			
			cout << "error " << endl;

			




		}

	}
	return 0;

}