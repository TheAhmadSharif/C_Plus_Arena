#include <iostream>
#include <string>

using namespace std;

class Person {
  public:
    Person(std::string const& name);
    std::string get_name() const;
    void print() const;
  private:
    std::string name;
};  // Note semicolon!