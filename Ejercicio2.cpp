#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void generarPrimos(int a)
{
  for (int i = 2; i <= a; i++)
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
        break;
      else if (i == j + 1)
        cout << "[" << i << "],"
             << " ";
    }
}

int main()
{
  generarPrimos(11);

  return 0;
}