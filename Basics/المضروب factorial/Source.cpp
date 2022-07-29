# include <iostream>

using namespace std;

int fact(int n)

{
	if (n == 0)
	
	{

		return 1;

	}

	else

	{

		return n * fact(n - 1);

	}




}


// fact (5)

//5*fact(4)=120

//4*fact(3)=24

//3*fact(2)=6

//2*fact(1)=2

//1


int main()

{
	int n;

	cout << fact(5) << endl;


        	return 0;
}