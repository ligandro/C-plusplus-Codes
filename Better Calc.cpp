/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main (){
    int x,y;
    cout << "Enter no1 : " << endl;
    cin >> x  ;
    cout << "Enter no2 : " << endl;
    cin >> y ;
    
    char k;
    cout << "Enter operator : " << endl;
    cin >> k ;
    if(  k == '+'){
        cout << x+y << endl;
    } 
    else if ( k == '-'){
        cout << x-y << endl;
        
    }
    else if ( k == '/'){
        cout << x/y << endl;
        
    }
    else if ( k == 'X'){
        cout << x*y << endl;
    }
    else { cout << "Error" << endl;}
    
    return 0;
}