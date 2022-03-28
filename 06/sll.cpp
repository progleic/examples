#include <iostream>
using namespace std;

struct node {
  int value;
  node* next;
};

node* build(int v, node* n) {
  return new node { v, n };
} 

void destroy(node* n) {
  while (n != nullptr) {
    node* aux = n->next; // avoid use-after-free
    delete n;
    n = aux;
  }
}

int size(const node* n) {
  int s = 0;
  while (n != nullptr) { n = n->next; s++; }
  return s;  
}

const node* search(const node* n, int v) {
  while (n != nullptr && n->value != v) { n = n->next; }
  return n;
}

bool contains(const node* n, int v) {
  return search(n, v) != nullptr;
}

node* remove_first(node* n) {
  if (n == nullptr) return nullptr;
  node* next = n->next;
  delete n;
  return next;
}

node* add_last(node* n, int x) {
  if (n == nullptr) return new node { x, nullptr};
  node* curr = n;
  while (curr->next != nullptr) curr = curr->next;
  curr -> next = new node { x, nullptr};
  return n;
}

void print(const node* n) {
  cout << "[ ";
  while (n != nullptr) {
    cout << n->value << ' ';
    n = n->next;
  }
  cout << "]\n";
}

int main() {
  node* a = build(1, build(2, build(3, nullptr)));
  node* b = new node { 1, 
             new node { 2, 
               new node { 3, nullptr } } }; 
  print(a); print(b);
  cout << size(a) << ' ' << size(b) << '\n';

  a = remove_first(remove_first(add_last(a, 4)));
  b = add_last(add_last(remove_first(b), 5),6);
  print(a); print(b);
  cout << size(a) << ' ' << size(b) << '\n';
  cout << boolalpha;
  for (int i = 1; i <= 6; i++) {
    cout << i << ": " << contains(a, i) << ' ' << contains(b, i) << '\n';
  }
  destroy(a); 
  destroy(b);
  return 0;
}
