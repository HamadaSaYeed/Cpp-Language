# include <iostream>
using namespace std;

class Books {

public:

	// ��� ���� ���� ����� 

	string title;

	int price;

	int pages;

	string author;

void print() //  class  ����� ���� ���  

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

	op1.title = "C++"; // title ���
	
	op1.price = 200;

	op1.pages = 300;

	op1.author = "Hamada";




	op1.print();  // call is function ������ ������
	
  /* op1.print();	op2.print();����� ��� ����� */

	 return 0;


}
