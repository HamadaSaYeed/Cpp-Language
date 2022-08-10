 #include <iostream>

using namespace std;

void print()

{


	cout << "welcom" << endl;


}

void print(int x,double y)

{



	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

}



// ÈÇÓÊÎÏÇã return 


string name(string h)

{


	cout << h << endl;
	return h;

}


// a + b

void print(int x, int y , int z)

{


	cout << x + y + z << endl;


}



int main()

{

	print();

	print(3,5.3);

	name("hamada");

	print(5 , 25 , 70);

	return 0;



}