# include <iostream>
using namespace std;

class Books {

public:

	// åäÇ ÈßÊÈ Ôæíå ÎÕÇÁÕ 

	string title;

	int price;

	int pages;

	string author;

void print() //  class  åäÚãá ÏÇáå Ìæå  

	{
		cout << "title is : " << title << endl;
	

		cout << "price is : " << price << "$" << endl;

	
		cout << "pages is : " << pages << endl;


		cout << "author is : " << author << endl;


	}


};



int main()

{


	Books op1;

	Books op2;

	op1.title = "C++"; // title áŞÈ
	
	op1.price = 200;

	op1.pages = 300;

	op1.author = "Hamada";




	op1.print();  // call is function äÓÊÏÚì ÇáÏÇáå
	
  /* op1.print();	op2.print();åíØÈÚ Şíã ÚÔÄíå */

	 return 0;


}
