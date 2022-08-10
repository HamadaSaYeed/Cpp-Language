#include <iostream>
using namespace std;
class Student
{
private :

	int mark;

public :

	Student(int m) // consturctor 
	
	{

		mark = m;

	}



	void print(); // function 


	friend void show (Student op1); // friend function


};


// function 
void Student::print()

{

	cout << "the mark is : " << mark << endl;

}



// friend function
void show(Student op1)

{

	cout << "th's is mark : " << op1.mark << endl;

}


int main()

{
	//  call constuctor
	Student op(621224);  



	//  call function
	op.print();



	//  call friend function
	show(op);


	return 0;

}