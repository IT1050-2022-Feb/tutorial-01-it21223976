/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <iostream>
int main()
{
    using namespace std;
    int no;
    long fac;

    cout << "Enter a Number : ";
    cin >> no;

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    // cout << "Factorial of %d is %ld\n", no, fac);  

    cout << "Factorial of " << no << " is " << fac << endl;  

    return 0;
}


