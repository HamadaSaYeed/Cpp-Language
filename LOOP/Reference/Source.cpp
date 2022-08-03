# include <iostream>

using namespace std;

void sw(int& x, int& y)    // Reference &

{

	int temp;

	// swap „»«œ·Â
	
	temp = x;
	x = y;
	y = temp;


	
	cout << "the x = " << x << endl;
	
	cout << "the y = " << y << endl;

	



}

int main()
{

	int x, y;
	cout << "enter the value " << endl;
	cin >> x >> y;
    sw(x,y);
	
}