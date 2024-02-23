#include <iostream>
using namespace std;
class Animal {
public:
  virtual void eat() {
    cout << "Eating..." << endl;
  }
};

class Dog : public Animal {
public:
  void eat() override {
    cout << "Eating bread..." << endl;
  }
};

int main() {
  Animal* animal = new Dog();
  animal->eat(); // Prints "Eating bread..."

  delete animal;

  return 0;
}