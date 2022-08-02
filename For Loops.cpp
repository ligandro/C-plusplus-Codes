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
    int index ;
    
    for( index = 10 ; index <=13 ; index++){
        cout << index<< endl;
    }
    
    int nums[] = {1,2,3,4,5} ;
    int n = sizeof(nums)/sizeof(nums[0]) ;
    for( index = 0 ; index < n ; index++){
        cout << nums[index] << endl;
    }
    
    return 0;
}

