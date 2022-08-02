/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    while ( index != 0){
        cout << index<< endl;
        index --;
    }
    
   do{
        cout << index<< endl;
        index ++;
    }while ( index != 1);
    
    int m = 5;
    int guess;
    int gcount =0;
    int glimit = 3;
    bool outg = true;
    while ( guess!= m && outg ){
        if ( gcount < glimit){
            cout << "Enter guess : " << endl;
            cin >> guess;
            gcount++;
        }
        else {
            outg = false;
        }
    }
    if ( outg ){
        cout << "You win " << endl;  
        }
        else {
            cout << "You lose " << endl;  
        }
    
    return 0;
}

