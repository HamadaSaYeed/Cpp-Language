  # include <iostream>

  using namespace std;

int main()
{
    // ØÈÇÚå ÌãíÚ ÇÚÏÇÏ ÇáãÕİæİå ÇáËäÇÁíå
	 
	int x[3][4] = { { 12,45,36,57 },{48, 65, 24, 84},{ 57, 51, 53, 84 } };


	for (int row = 0; row < 3; row++)

	{

		    for (int column = 0; column < 4; column++)

		    {

			    cout << x[row][column] << endl;


		    }
	}


	return 0;
}