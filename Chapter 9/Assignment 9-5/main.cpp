#include <iostream>

/*
To practice coding without the use of the std namespace:
*/

// using namespace std;

struct Node {
  
  int num;
  struct Node *next;

};

int main() {
  
  Node *new_node, *head, *ptr;
  head = nullptr;
  
  for (int i = 1; i <= 5; i++) {
    
    new_node = new Node;
    std::cout << "Enter number " << i << ": ";
    std::cin >> new_node->num;
    new_node->next = nullptr;
    
    if (head == nullptr) {
      head = new_node;
		}
    
    else {
      ptr = head;
      
      while(ptr->next != nullptr) {
        ptr = ptr->next;
      }
      
      ptr->next = new_node;
		}
    
    std::cout << std::endl;

  }
  
  ptr = head;
  int position = 1;
  
  while(ptr != nullptr) {
    std::cout << "Node " << position++ << "'s value is " << ptr->num << std::endl;
    ptr = ptr->next;
  }
  
  return 0;

}