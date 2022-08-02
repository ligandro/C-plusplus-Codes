/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


void sayhi(string x,int age);
int main()
{
    cout << "1" << endl;
    string y;
    getline(cin,y);
    int z ;
    cin >> z ;
    sayhi(y,z);
    cout << "2" << endl;
    return 0;
}

void sayhi(string x,int age){
    cout << "Hi" << x << endl;
    cout << "You are " << age << " years old " << endl;
    
    
}

