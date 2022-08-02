/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

class  chef {
    public :
       void makechik(){
           cout << " The chef make chicken" << endl;
       }
       void makesalad(){
           cout << " The chef make salad" << endl;
       }
       void makesoup(){
           cout << " The chef make soup " << endl;
       }
};

class  italianchef : public chef {
    public:
    void makepasta(){
           cout << " The chef make pasta" << endl;
       }
    void makesoup(){
           cout << " The chef make spicy soup " << endl;
       }
};
      

int main()
{
    chef Chef1;
    Chef1.makesalad();
    
    italianchef Pizza;
    Pizza.makesoup();
    Pizza.makepasta();
    return 0;
}