#include <iostream>
using namespace std;

struct tree {
  int value;
  tree* left;
  tree* right;
};

tree* build(tree* t, int v) {
  if (t == nullptr) 
    return new tree { v, nullptr, nullptr };
  if (v < t->value)     
    t->left  = build(t->left, v);
  else if (v > t->value) 
    t->right = build(t->right, v);
  // Note: no change if v == t.value
  return t;
}

void destroy(tree* t) {
  if (t != nullptr) {
    destroy(t->left);
    destroy(t->right);
    delete t;
  }
}

bool contains(const tree* t, int v) {
  // Iterative implementation this time ...  
  while (t != nullptr) {
    if (t->value == v) return true;
    t = v < t->value ? t->left : t->right;
  }
  return false; 
}

void print_aux(const tree* t) {
  if (t != nullptr) {
    print_aux(t->left);
    cout << t->value << ' ';
    print_aux(t->right);
  }
}

void print(const tree* t) {
  cout << "{ "; 
  print_aux(t);
  cout << "}\n";
}

int main(void) {
  // Initially empty tree
  tree* t = nullptr;

  // Define tree for a number of elements
  int values[] = { 13, 4, 4, 2, 9, 2, 0, 7, 5, 6 };
  for (int v : values) t = build(t,v);
  print(t);
  
  // Test if values are in tree
  cout << boolalpha;
  for (int i = 0; i < 15; i++) {
    cout << i << "? " << contains(t, i) << '\n';
  }
  
  // Release memory
  destroy(t);
  return 0; 
}


