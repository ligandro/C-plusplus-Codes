/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int max(int m,int n){
    int result;
    if( m > n){
        result = m;
    } 
    else { 
        result = n;
    }
    return result;
}

int main (){
    bool ismale = true;
    bool istall= false;
    if(ismale && istall){
        cout << "You are a male and tall " << endl;
    } 
    else if ( ismale ||  istall){
        cout << " You are eihter male or tall" << endl;
        
    }
    else { 
        cout << "You are not a male" << endl;
    }
    
    int x,y;
    cout << "Enter no1 : " << endl;
    cin >> x  ;
    cout << "Enter no2 : " << endl;
    cin >> y ;
    if( x> y){
        cout << x << " is greater than " << y << endl;
    } 
    else if (  x== y ){
        cout << x << " is equal to " << y << endl;
        
    }
    else { 
        cout << y << " is greater than " << x << endl;
    }
    
    int m,n;
    cout << "Enter no1 : " << endl;
    cin >> m  ;
    cout << "Enter no2 : " << endl;
    cin >> n ;
    cout << max(m,n)<< endl ;
    return 0;
}