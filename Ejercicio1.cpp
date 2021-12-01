#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void sumaStrings(string a, string b)
{

  int sum_a = atoi(a.c_str());
  int sum_b = atoi(b.c_str());
  int resultado = sum_a + sum_b;
  cout << "La suma es: " << resultado;
}

int main()
{

  sumaStrings("1", "2");
  return 0;
}