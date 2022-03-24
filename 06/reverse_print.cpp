#include <iostream>
using namespace std;

int main() {
  int n; cout << "n? "; cin >> n;
  // Allocate array
  double* arr = new double[n];
  // Read values
  for (int i = 0; i < n; i++) cin >> arr[i];
  // Print value in reverse order
  for (int i = n - 1; i >= 0; i--) cout << arr[i] << '\n';
  // Free up memory
  delete [] arr;
  return 0;
}
