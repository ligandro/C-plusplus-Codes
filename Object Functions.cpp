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
       string name ;
       string author ;
       int pages ;
      Book(string nam, string autho, int page){
          name = nam;
          author = autho;
          pages = page;
      } 
      
      bool haspa(){
          if ( pages > 120){
              return true;
          }
          else {
              return false;
          }
      }
};

int main()
{
    Book book1( " Book 1" , " Potter" , 110);
    Book book2( " Book 2" , " Jk rowler", 240);
    
    cout << book1.haspa() ;
    
    return 0;
}
