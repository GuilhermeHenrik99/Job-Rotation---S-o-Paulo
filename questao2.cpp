#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Informe um numero: ";
  cin >> n;
  
  int a = 0, b = 1, c;
  while (a < n) {
    c = a + b;
    a = b;
    b = c;
  }
  
  if (a == n) {
    cout << n << " pertence a sequencia de Fibonacci." << endl;
  } else {
    cout << n << " nao pertence a sequencia de Fibonacci." << endl;
  }
  
  return 0;
}

