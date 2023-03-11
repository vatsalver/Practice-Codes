#include <iostream>
using namespace std;

class notebook {
  static int page_number; 
public:
  static int value() { 
    return page_number;
  }
};

int notebook::page_number=1; 

int main() {
  cout << "Number ="<<notebook::value()<< endl; 
  return 0;
}