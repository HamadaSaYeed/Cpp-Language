# include <iostream>

using namespace std;

int avg(float a, float b, float c, float d)

{
		float sum = (a + b + c + d) / 4;

		cout << "the Average is : " << sum << endl;


		return sum;
	
}


int main()

{
	

		float x, y, z, w;

		cout << "enter the geree " << endl;

		cin >> x >> y >> z >> w;


		avg(x, y, z, w);



		return 0;


	
}