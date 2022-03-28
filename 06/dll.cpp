#include <iostream>
using namespace std;

struct node {
  int value;
  node* prev;
  node* next;
};

struct list {
  node* first;
  node* last;
  int size;
};

// Build a node
node* build(int v, node* prev=nullptr, node* next=nullptr) {
  node* new_node = new node { v, prev, next};
  if (prev != nullptr) prev->next = new_node;
  if (next != nullptr) next->prev = new_node;
  return new_node;
} 

// Build an empty list 
list* build() {
  return new list { nullptr, nullptr, 0 };
}

// Destroy node and successors. 
void destroy(node* n) {
  while (n != nullptr) {
    node* aux = n->next;
    delete n;
    n = aux;
  }
}

// Destroy list
void destroy(list* l) {
  destroy(l->first);
  delete l;
}

int size(const list* l) {
  return l->size;
}

void print(const list* l) {
  cout << "[ ";
  node* n = l->first;
  while (n != nullptr) {
    cout << n->value << ' ';
    n = n->next;
  }
  cout << "]\n";
}

// Add element to the beginning of the list.
void add_first(list* l, int v) {
  l->first = build(v, nullptr, l->first);
  if (l->size == 0) l->last = l->first;
  l->size++;
}

// Add element to the end of the list.
void add_last(list* l, int v) {
  l->last = build(v, l->last, nullptr);
  if (l->size == 0) l->first = l->last;
  l->size++;
}


// Remove first element.
void remove_first(list* l) {
  if (l->size == 0) return;
  l->size--;
  node* n = l->first;
  l->first = l->first->next; 
  delete n;
  if (l->size == 0) l->last = nullptr;
  else l->first->prev = nullptr;
}

// Remove last element.
void remove_last(list* l) {
  if (l->size == 0) return;
  l->size--;
  node* n = l->last;
  l->last = l->last->prev; 
  delete n;
  if (l->size == 0) l->first = nullptr;
  else l->last->next = nullptr;
}

int main() {
  list* l = build();
  add_first(l, 1);
  add_first(l, 2);
  add_first(l, 3);
  add_last(l, 4);
  add_last(l, 5);
  add_last(l, 6);
  print(l);
  cout << size(l) << '\n';
  remove_first(l);
  remove_last(l);
  print(l);
  cout << size(l) << '\n';
  destroy(l);
  return 0;
}
