# include <iostream>

using namespace std;



class text

{

public:

	string name;
	int grade;
	int age;

	void print(text on)  // function take opject            // member function
	{

		cout << "name is : " <<on.name <<endl;

		cout << "grade is : " << on.grade << endl;

		cout << "age is : " << on.age << endl;

	}

};


int main()

{

	text op1;  //  opgect

	text op2;  //  opgect

	op1.name = "Hamada Sayed ";

	op2.name = "yousif king ";

	op1.grade = 77;

	op2.grade = 88;

	op1.age = 18;

	op2.age = 35;

	op1.print(op1);  //  call is opject 1

	cout << "----------------------" << endl;

	op2.print(op2);  //  call is opject 2


		return 0;
}