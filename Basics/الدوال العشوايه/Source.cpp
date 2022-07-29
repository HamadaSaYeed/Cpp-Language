# include <iostream>

# include <stdlib.h>

# include <time.h>

using namespace std;

int main()

{

	srand(time(0));


	for (int x = 1; x <= 10; x++)
	{


		cout << rand()%10+1 << endl;  // +1 åíÌíÈ ÑÞã 10 ãÚ ÇáÇÚÏÇÏ ÇáÚÔæÇÁíå


	}


	return 0;
}