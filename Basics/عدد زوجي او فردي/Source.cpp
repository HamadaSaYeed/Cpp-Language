# include <iostream>

using namespace std;

int main()
{

	while (true)

	{

	 int number;

		cout << " enter the number ? " << endl;

		 cin >> number;

		if (number != 0)
		
		{
			if (number % 2 == 0)

			{


				cout << "the number is Even" << endl;


			}

			else

			{


				cout << "the number is odd" << endl;


			}
		
		
		}
		
		else
		
		{
			
			
			cout << "the number is zero" << endl;


		}
	
	
	
	}

	return 0;

}