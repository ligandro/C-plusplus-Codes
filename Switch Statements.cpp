/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

string getdayofweek(int daynum){
    string day;
    switch(daynum){
    case 0 : 
        day = "Sunday";
        break;
    case 1 : 
        day = "Monday";
        break;
    case 2 : 
        day = "Tuesday";
        break;
    case 3 :
        day = "Wednesday";
        break;
    case 4 : 
        day = "Thursday";
        break;
    case 5 : 
        day = "Friday";
        break;
    case 6 : 
        day = "Saturday";
        break;
    default : 
        day = " Invalid";
    }
    
    return day;
}
int main (){
    int x;
    cout << "Enter no: " << endl;
    cin >> x  ;
    cout << getdayofweek(x) <<  endl ;
    
    return 0;
}