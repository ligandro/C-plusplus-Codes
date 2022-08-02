/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

class  Book {
    public : 
       int pages ;
       string name ;
       string author ;
      Book(string nam, string autho, int page){
          cout <<  nam  <<  endl;
          cout <<  autho <<  endl;
          cout <<  page <<  endl;
      } 
};

int main()
{
    Book book1( " Book 1" , " Potter" , 120);
    Book book2( " Book 2" , " Jk rowler", 240);
    return 0;
}