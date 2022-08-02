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
    int age;
    cout << " Enter your age:  " << endl;
    cin >> age ;
    cout << " You are " << age << " years old " << endl;
   
    string name ;
    cout << " Enter your name:  " << endl;
    getline(cin,name);
    cout << "Hello " << name << endl;
   
  
    return 0;
}