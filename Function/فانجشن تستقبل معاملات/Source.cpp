#include <iostream>
using namespace std;

class Coompany
{
public:

	int id;
	string name;
	int salary;


	void show(int x, string y, int z) {    // function call parametr 

		id = x;         //  value id == value x
		name = y;       //  value name == value y
		salary = z;     //  value salary == value z

	}

	void save() {

		cout << id << "  " << name << "  " << salary << endl;

	}


};

int main()
{

	Coompany op1;

	Coompany op2;

	op1.show(2, "Hamada", 88);       //initial value from parameter 

	op2.show(002, "yousif", 808);    //initial value from parameter 

	op1.save();
	op2.save();




}