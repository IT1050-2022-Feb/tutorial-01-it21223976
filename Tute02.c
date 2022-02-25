/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <iostream>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   using namespace std;

   cout<<"Enter Employee Type : ";
   cin>>etype;

   cout<<"Enter Salary  : ";
   cin>>salary;

   cout<<"Enter OtHrs : ";
   cin>>otHrs; 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs * otRate;
   std::cout<<"Net Salary is " << netSalary;
  
   return 0;
}
