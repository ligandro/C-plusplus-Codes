/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 3;
    string name = "Liga" ;
    double gpa = 3.4;
    
    cout << &num << endl ;
    
    int *pnum = &num;
    string *pname = &name;
    cout << *pnum << endl ;
    cout << pname ;
   
    return 0;
}