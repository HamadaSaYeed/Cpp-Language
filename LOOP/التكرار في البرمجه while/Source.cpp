   # include <iostream>

 using namespace std;

int main()
{
	
	int x;
	
	while (true)
	
	{
		cout << " enter your degree from 50 to 100 ? " << endl;
		
		cin >> x;
		
		if (x >= 50 && x <= 60)
		
		{
		
			cout << "  your degree is D " << endl;
		
		}
		
		else if (x >= 60 && x <= 70)
		
		{
		
			cout << "  your degree is c " << endl;
		
		}
		
		else if (x >= 70 && x <= 80)
		
		{
		
			cout << "  your degree is B " << endl;
		
		}
		
		else if (x >= 80 && x <= 90)
		
		{
		
			cout << "  your degree is A " << endl;
		
		}
		
		else if (x >= 90 && x <= 100)
		
		{
		
			cout << "  your degree is A+ " << endl;
		
		}
		
		else
		
		{
		
			cout << " wrong number " << endl;
		
		}

	}
	
	return 0;
}