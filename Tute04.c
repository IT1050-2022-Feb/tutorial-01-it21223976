/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/
#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int &len, int &wth);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) 
{
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here

void input(int &len, int &wth)
{
    len = 12;
    wth = 5;
}



  return no1 * no2;
}

