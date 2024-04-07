
#include "simple_vector.hpp"

#include <iostream>
using namespace std;



int main() {
  cout << "== v\n";
  simple_vector<int> v(2);
  cout << v.size() << ' ' << v.capacity() << '\n';
  v.add(-1);
  v.add(2);
  v.add(4); // grows capacity to 4
  v.add(3);
 
  for (int i = 0; i < v.size(); i++) 
     cout << "[" << i << "] : " << v.at(i) << '\n';
  cout << v.size() << ' ' << v.capacity() << '\n';
  cout << "== v2\n";
  simple_vector<int> v2(v);
  cout << v2.size() << ' ' << v2.capacity() << '\n';
  for (int i = 0; i < v2.size(); i++)
    v2.at(i)++;
  v2.add(9);
  for (int i = 0; i < v2.size(); i++) 
    cout << "[" << i << "] : " << v2.at(i) << '\n';
  cout << v2.size() << ' ' << v2.capacity() << '\n';
  return 0;
}
