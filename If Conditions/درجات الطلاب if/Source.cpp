  # include <iostream>

using namespace std;

int main()
{
	

	while (true)

	{
		int Degree;

		cout << "enter the Degree ?" << endl;

		cin >> Degree;




		if (Degree >= 49 && Degree != 0)
		{

			if (Degree >= 50 && Degree <= 60)

			{


				cout << " the degree is D " << endl;


			}



			else if (Degree >= 60 && Degree <= 70)

			{


				cout << " the degree is C " << endl;


			}


			else if (Degree >= 70 && Degree <= 80)

			{


				cout << " the degree is B " << endl;


			}



			else if (Degree >= 80 && Degree <= 90)

			{


				cout << " the degree is A " << endl;


			}


			else if (Degree >= 90 && Degree <= 100)

			{


				cout << " the degree is A+ " << endl;


			}
	     	

			else
			
			{


				cout << "NO Degree" << endl;


			}


		}



	}



	return 0;



}