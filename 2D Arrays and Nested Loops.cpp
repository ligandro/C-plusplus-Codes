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
    int nums[3][2] = {
        { 1,2},  { 3,4},{ 5,6} 
    } ;
    cout << nums[2][1] << endl;
    
    for ( int i = 0 ; i < 3 ; i++ ){
        for ( int j = 0 ; j < 2 ; j++ ){
            cout << nums[i][j]  ;
        }
        cout << endl;
    }
    /* This is a comment */
    // comment 
    
   
    return 0;
}
