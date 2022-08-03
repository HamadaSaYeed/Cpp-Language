#include <iostream>

using namespace std;

int get(int n)

{
	if (n == 1)

	{

		return 1;

	}

	else

	{

		return 1 + get(n - 1);

	}



}


      // get(3)
      // 1 + get(2)=3
      // 1 + get(1)=2
      //1


int main()

{

	int n = 3;

	cout << " get(3) = ";
	cout << get(3) << endl;


	       return 0;
}