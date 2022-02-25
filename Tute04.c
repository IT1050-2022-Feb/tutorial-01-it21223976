/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/
#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;

  std::cout << "Enter a value for r ";
  std::cin >> r;

  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;

  return 0;
}

long Factorial(int no)
{
  int i, num = 1;
  for (i = 1; i <= no; i++)
  {
    num = num * i;
  }
  return num;
}


long nCr(int n, int r)
{
  return Factorial(n)  / (Factorial(r) * Factorial(n - r));
}

int multiply (int no1, int no2)
{
  return no1 * no2;
}

