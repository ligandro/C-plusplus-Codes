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
       
};

int main()
{
    Book book1;
    book1.name = "harry";
    book1.author = "potter";
    book1.pages = 120 ;
    cout << book1.name << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    
    Book book2;
    book2.name = "Martain";
    book2.author = "JK";
    book2.pages = 230 ;
    cout << book2.name << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;
    
    
    return 0;
}
