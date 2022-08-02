/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

double cube(double num){
    double result = num*num*num;
    return result;
    /* or return num num num */
}


int main (){
    double x ;
    cout << "Enter Number : " << endl;
    cin >> x;
    double ans = cube(x);
    cout << ans << endl;
    /* or cout << cube(x) << endl; */
    return 0;
}
