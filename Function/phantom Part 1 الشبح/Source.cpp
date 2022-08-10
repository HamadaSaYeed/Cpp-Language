# include <iostream>
using namespace std;

class part
{
	 
private:

	int x, y;


public:

	// –Ì «·„ €Ì—«  ﬂœÂ

 part ():x(5),y(8){}  // constrouster

 part (int a , int b) : x (a) , y (b){}

 ~part(){} // Destrouster

 // function 

 void add(part p1 , part p2)  // phantom «·‘»Õ
 {
	 x = p1.x * p2.x; // 25
	 y = p1.y + p2.y; // 16

 }

 void show()
 {

	 cout << x << "  " << y << endl;

 }

};

int main()
{

	part p1, p2,p3;
	p3.add(p1 , p2);
	p3.show();

	

}