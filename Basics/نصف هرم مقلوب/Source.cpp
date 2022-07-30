#include<iostream>
using namespace std;
int main()

{
    for (int i = 1; i <= 5; i++)                     // row   ÓØÑ
       {
             for (int k = 1; k < i; k++)            //space  ÝÑÇÛ
           
                 cout << "  " ;

              for (int j = 5; j >= i; j--)          // print * 
              
              cout << "* ";
               
              cout << endl;



       }
    return 0;
}