/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int power( int base , int exp){
    int pow = 1;
    for( int index = 1; index <= exp ; index++){
        pow *= base;
    }
    return pow;
}


int main()
{
    int x,y ;
    cout << " Enter base : " <<endl;
    cin >> x ;
    cout << " Enter exp : " <<endl;
    cin >> y ;
    cout << power(x,y) << endl; 
    
    
    
    return 0;
}