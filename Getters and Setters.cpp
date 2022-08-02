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
    private : 
       string genre;
    
    public :
       string name ;
       string author ;
      Book(string nam, string autho, string page){
          name = nam;
          author = autho;
          getgen(page);
      } 
      
      void getgen(string page){
          if ( page == "Ok" || page == "OK"){
              genre = page;
          }
          else {
              genre = "Nr";
          }
          
      }
      
      string getg(){
          return genre;
      }
      
     
};

int main()
{
    Book book1( " Book 1" , " Potter" ," Ok") ;
    
    book1.getgen("Ok");
    cout << book1.getg() ;
    return 0;
}
