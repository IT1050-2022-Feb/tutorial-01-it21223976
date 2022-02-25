/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

##include <iostream>
int main() 
{
    float cm, inches;
    using namespace std;

    cout<<"Enter a length in cm : ";
    cin>>cm;

    inches = cm / 2.54;
    cout<<"Length in inches is "<< inches << endl;

    return 0;
}  