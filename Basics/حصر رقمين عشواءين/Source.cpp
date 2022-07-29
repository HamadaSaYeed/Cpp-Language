# include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	// 50 to 60
	
	srand(time(0));
	
	for (int x = 1; x <= 15; x++)
	
	{
	
		cout << 50 + rand() % (60 - 50 + 1) << endl;
	
	} 

	
	return 0;

}

