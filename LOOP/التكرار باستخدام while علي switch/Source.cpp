#include<iostream>
using namespace std;
int main()
{
	int x;
	while(true)
	{
		cout << "enter your degree from 50 to 100 ? " << endl;
		cin >> x;
		switch (x >= 50 && x <= 60)
		{
		case 1:
			cout << "your degree is D " << endl;
		default:
			cout << "wrong numper " << endl;
		}

		
	}







}